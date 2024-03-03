cmake_minimum_required(VERSION 3.27)
project(Tommaso_Puzzo_ChatUtenti)

set(CMAKE_CXX_STANDARD 11)

add_executable(Tommaso_Puzzo_ChatUtenti main.cpp
        Observer.h
        Observer.cpp
        Subject.cpp
        Subject.h
        ChatLog.cpp
        ChatLog.h
        Chat.cpp
        Chat.h)
