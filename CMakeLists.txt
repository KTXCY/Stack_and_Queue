cmake_minimum_required(VERSION 3.28)
project(Stack_and_Queue)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

set(SqStack SqStack/test01.c;SqStack/SqStack.h;SqStack/SqStack.c)

SET(LStack LStack/LStack.c;LStack/LStack.h;LStack/test02.c)

set(SqQueue SqQueue/test03.c;SqQueue/SqQueue.c;SqQueue/SqQueue.h)

SET(LQueue LQueue/test04.c;LQueue/LQueue.c;LQueue/LQueue.h)

set(EXECUTABLE_OUTPUT_PATH  ${CMAKE_CURRENT_BINARY_DIR}/bin)

add_executable(teat01 ${SqStack})
add_executable(test02 ${LStack})

add_executable(test03 ${SqQueue})
add_executable(test04 ${LQueue})