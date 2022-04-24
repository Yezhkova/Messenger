//
// Created by alina on 4/13/22.
//

#include "Messenger.h"
#include "Session.h"

Messenger::Messenger( std::string userName, Key shaKey, std::uint16_t port )
    :
        m_userName(userName),
        m_shaKey(shaKey),
        m_io_context(),
        m_acceptor  (m_io_context, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), port))

{
    Log().info("Messenger " + userName + " created");
    async_accept(); // Doesn't block
    Log().info("Messenger server waiting for connections");
    std::thread ServerThread ([&]
    {
        m_io_context.run();
    });
    ServerThread.detach();
}

void Messenger::sendMessage( Key receiver, std::string message )
{

};

bool Messenger::sendMessage( boost::asio::ip::tcp::endpoint receiver, std::string message )
{
    Log().info("Message " + message + " sent");
    boost::asio::ip::tcp::socket socket(m_io_context);
    boost::system::error_code error;
    socket.connect(receiver, error);

    if ( error )
    {
        Log().warn("Error");
        return false;
    }
    else
    {
        Log().warn("OK");

        boost::asio::async_write(socket, boost::asio::buffer(message), [] (boost::system::error_code error, std::size_t bytes_transferred)
        {
            LOG("Async_write error " << error.message())
        });

        return true;
    }
};

void Messenger::async_accept()
{
    m_socket.emplace(m_io_context);
    m_acceptor.async_accept( *m_socket, [this] ( boost::system::error_code error )
    {
        std::make_shared<Session>(std::move(*m_socket))->start();
        async_accept();
    } );
};