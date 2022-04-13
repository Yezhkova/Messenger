//
// Created by alina on 4/13/22.
//

#include <iostream>
#include "Messenger.h"

int main() {
// boost port - 2 parameter
    Messenger messenger ( "Alina", {1,2,3});
    messenger.sendMessage({1,2,3}, "Hello"); // endpoint - 1 param
    return 0;
}