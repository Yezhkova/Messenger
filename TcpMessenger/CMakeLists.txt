cmake_minimum_required(VERSION 3.21)
project(TcpMessenger)
set( SOURCES    TcpMessenger.cpp
                Messenger.cpp
                Log.cpp
                Session.cpp
   )

# file(GLOB SOURCES *.cpp)

add_executable( TcpMessenger ${SOURCES} )