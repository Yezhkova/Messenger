//
// Created by alina on 4/13/22.
//
#pragma once

#include <boost/asio.hpp>
#include <optional>
#include <iostream>
#include "Session.h"

class Server
{
public:

    Server(boost::asio::io_context&, std::uint16_t );

    void async_accept();

private:

    boost::asio::io_context&                        io_context;
    boost::asio::ip::tcp::acceptor                  acceptor;
    std::optional<boost::asio::ip::tcp::socket>     socket;
};