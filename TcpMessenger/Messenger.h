//
// Created by alina on 4/13/22.
//
#pragma once

#include <string>
#include <array>
#include <iostream>
#include <boost/asio.hpp>
#include "Log.h"

using Key = std::array<int8_t, 32>;

class Messenger
{
public:
    Messenger( std::string userName, Key shaKey );
    void sendMessage( Key receiver, std::string message );

private:
    std::string                 m_userName;
    Key                         m_shaKey;
    boost::asio::io_context     m_io_context;
};
