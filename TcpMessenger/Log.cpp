//
// Created by alina on 4/13/22.
//

#include "Log.h"

void Log::info(std::string expr)
{
    std::cout << expr << '\n';
};

void Log::warn(std::string expr)
{
    std::cerr << expr << '\n';
};