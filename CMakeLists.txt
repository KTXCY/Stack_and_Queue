cmake_minimum_required(VERSION 3.28)
project(Stack_and_Queue)

set(CMAKE_CXX_STANDARD 17)

set(SqStack SqStack/test01.c;SqStack/SqStack.h;SqStack/SqStack.c)

SET(LStack LStack/LStack.c;LStack/LStack.h;LStack/test02.c)
set(EXECUTABLE_OUTPUT_PATH  ${CMAKE_CURRENT_BINARY_DIR}/bin)

add_executable(teat01 ${SqStack})
add_executable(test02 ${LStack})