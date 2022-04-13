//
// Created by alina on 4/13/22.
//

#pragma once

#include <string>
#include <array>
#include <iostream>
#include "Log.h"

//#define LOG(expr) std::cout << expr << '\n';
//#define LOG_WARN(expr) std::cerr << expr << '\n';

using Key = std::array<int8_t, 32>;

class Messenger
{
public:
    Messenger( std::string userName, Key shaKey );
    void sendMessage( Key receiver, std::string message );

private:
    std::string m_userName;
    Key         m_shaKey;
};
