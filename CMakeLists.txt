cmake_minimum_required(VERSION 3.21)
project(Messenger)

set(CMAKE_CXX_STANDARD 17)

add_executable(Messenger main.cpp)
add_subdirectory(libtorrent)
add_subdirectory(TcpMessenger)
add_subdirectory(DecMessenger)