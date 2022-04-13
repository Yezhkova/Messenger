//
// Created by alina on 4/13/22.
//

#include "Log.h"

//#define LOG(expr) std::cout << expr << '\n';
//#define LOG_WARN(expr) std::cerr << expr << '\n';

void Log::info(std::string expr)
{
    std::cout << expr << '\n';
};

void Log::warn(std::string expr)
{
    std::cerr << expr << '\n';
};