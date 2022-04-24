//
// Created by alina on 4/13/22.
//
#pragma once

#include <iostream>
#include <optional>
#include <boost/asio.hpp>

class Session : public std::enable_shared_from_this<Session>
{
public:

    Session(boost::asio::ip::tcp::socket&&);
    ~Session();

    void start();

private:

    boost::asio::ip::tcp::socket    m_socket;
    boost::asio::streambuf          streambuf;
};