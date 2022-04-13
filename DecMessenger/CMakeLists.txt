cmake_minimum_required(VERSION 3.21)
project(DecMessenger)
set( SOURCES    DecMessenger.cpp
                src/Messenger.cpp
                src/Log.cpp
        )

add_executable( DecMessenger ${SOURCES} )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../libtorrent/include )
target_link_libraries( DecMessenger ${CMAKE_CURRENT_SOURCE_DIR}/../cmake-build-debug/libtorrent/libtorrent-rasterbar.so)
