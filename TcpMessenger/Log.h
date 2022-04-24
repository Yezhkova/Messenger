//
// Created by alina on 4/13/22.
//

#pragma once

#include <string>
#include <iostream>

#define LOG(expr) std::cout << expr << '\n';
#define LOG_WARN(expr) std::cerr << expr << '\n';

class Log
{
public:
    void info(std::string);
    void warn(std::string);

};
