cmake_minimum_required(VERSION 3.13)
project(TFTinker3dGameEngine VERSION 0.01)

set(CMAKE_CXX_STANDARD 20)

# project files
set(SRCFILES
        src/main.cpp)

# easyloggingpp lib files
set(SRCFILES ${SRCFILES} lib/easyloggingpp/easylogging++.cc)
# NOTE there is directory also

# Program info (current just icon)
set(SRCFILES ${SRCFILES} res/icons/programIcon.rc)

# setup executable
add_executable(${PROJECT_NAME} ${SRCFILES})
# add easyloggingpp directory
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/lib/easyloggingpp)
