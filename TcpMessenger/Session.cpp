//
// Created by alina on 4/13/22.
//

#include "Session.h"

Session::Session(boost::asio::ip::tcp::socket&& socket)
: socket(std::move(socket))
{
}

void Session::start()
{
    boost::asio::async_read_until(socket, streambuf, '\n', [self = shared_from_this()] (boost::system::error_code error, std::size_t bytes_transferred)
    {
        std::cout << std::istream(&self->streambuf).rdbuf();
    });
}