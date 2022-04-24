//
// Created by alina on 4/13/22.
//

#include "Session.h"
#include "Log.h"

Session::Session(boost::asio::ip::tcp::socket&& socket)
: m_socket(std::move(socket))
{
    boost::system::error_code error;
    boost::asio::ip::tcp::endpoint socket_remote_endpoint = m_socket.remote_endpoint(error);
    LOG("Endpoint error " << error.message())
    LOG( "Received connection from " << socket_remote_endpoint )
}

Session::~Session()
{
    std::cerr << "Session killed\n";
}

void Session::start()
{
    boost::asio::async_read_until(m_socket, streambuf, '\n', [self = shared_from_this()]
                                                          (boost::system::error_code error, std::size_t bytes_transferred)
    {
        std::cout << std::istream(&self->streambuf).rdbuf() << '\n';
    });
}