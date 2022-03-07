cmake_minimum_required(VERSION 3.13)
project(TFTinker3dGameEngine VERSION 0.01)

set(CMAKE_CXX_STANDARD 20)

add_executable(TFTinker3dGameEngine
        src/main.cpp
        lib/easyloggingpp/easylogging++.cc
        res/icons/programIcon.rc
        )
target_include_directories(TFTinker3dGameEngine PUBLIC ${CMAKE_SOURCE_DIR}/lib/easyloggingpp)
