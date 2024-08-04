cmake_minimum_required(VERSION 3.28)
project(Stack_and_Queue)

set(CMAKE_CXX_STANDARD 17)

set(SRC_LIST Stack/test01.c;Stack/Stack.h;Stack/Stack.c)

set(EXECUTABLE_OUTPUT_PATH  ${CMAKE_CURRENT_BINARY_DIR}/bin)

add_executable(teat01 ${SRC_LIST})