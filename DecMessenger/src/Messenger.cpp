//
// Created by alina on 4/13/22.
//

#include "Messenger.h"
Messenger::Messenger( std::string userName, Key shaKey ) : m_userName(userName), m_shaKey(shaKey)
{
    Log().info("Messenger " + userName + " created");
}

void Messenger::sendMessage( Key receiver, std::string message )
{
    Log().warn("Message " + message + " sent");
}