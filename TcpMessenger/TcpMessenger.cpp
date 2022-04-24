//
// Created by alina on 4/13/22.
//

//#include <iostream>
#include <array>
#include "Messenger.h"

int main() {
    std::array<int8_t, 32> key1 = {1,2,3,4,5,6,7,8,9,10};
    std::array<int8_t, 32> key2 = {1,2,3,4,6,6,7,8,9,13};

    Messenger messenger1 ( "Alina", key1, 15001 );
    Messenger messenger2 ( "Oksana", key2, 15002 );

    boost::asio::ip::tcp::endpoint endpoint1( boost::asio::ip::make_address("127.0.0.1"), 15001 );
    boost::asio::ip::tcp::endpoint endpoint2( boost::asio::ip::make_address("127.0.0.1"), 15002 );

    messenger1.sendMessage( endpoint2, "Hello" );
    messenger2.sendMessage( endpoint1, "one more message");
    messenger1.sendMessage( endpoint2, "Thanks!" );

    sleep(5);
    return 0;
}