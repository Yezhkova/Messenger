//
// Created by alina on 4/13/22.
//
#pragma once

#include <string>
#include <array>
#include <iostream>
#include <optional>
#include <boost/asio.hpp>
#include "Log.h"

using Key = std::array<int8_t, 32>;

class Messenger
{
public:
    Messenger( std::string, Key, std::uint16_t );
    void sendMessage( Key, std::string );
    bool sendMessage( boost::asio::ip::tcp::endpoint, std::string );


private:
    void async_accept();

private:
    std::string                                     m_userName;
    Key                                             m_shaKey;
    boost::asio::io_context                         m_io_context;
    boost::asio::ip::tcp::acceptor                  m_acceptor;
    std::optional<boost::asio::ip::tcp::socket>     m_socket;

};
