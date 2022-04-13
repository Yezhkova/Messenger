//
// Created by alina on 4/13/22.
//

#include "Messenger.h"
Messenger::Messenger( std::string userName, Key shaKey ) : m_userName(userName), m_shaKey(shaKey)
{
    Log().info("Messenger " + userName + " created");
//    boost::asio::io_context io_context;
//    server srv(io_context, 15001);
//    srv.async_accept(); // Doesn't block
//    io_context.run();
    //std::thread ServerThread ([] {io_context.run();}).detach();
}

void Messenger::sendMessage( Key receiver, std::string message )
{
    Log().warn("Message " + message + " sent");
//    io::io_context io_context;
//    tcp::socket socket(io_context);
//    ip::address address = ip::make_address("127.0.0.1");
//    tcp::endpoint endpoint(address, 80);
//
//    error_code error;
//    socket.connect(endpoint, error);
//
//    if(!error)
//    {
//        std::cout << "The connection has been established!";
//    }
//    else
//    {
//        std::cerr << "Something went wrong :(";
//    }

}