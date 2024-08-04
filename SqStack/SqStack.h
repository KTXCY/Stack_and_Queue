//
// Created by kitsc on 2024/8/4.
//

#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 100

typedef int SElemType;

typedef struct SqStack {
    SElemType *base;
    SElemType *top;
    int length;
} SqStack;


// 初始化一个栈
bool InitSqStack(SqStack *S);

// 销毁一个栈
bool DestroySqStack(SqStack *S);

// 入栈
bool Push(SqStack *S, SElemType e);

// 出栈
bool Pop(SqStack *S);

// 打印栈中的元素
void Print(SqStack S);

int StackLength(SqStack S);

bool ClearStack(SqStack *S);

bool StackEmpty(SqStack S);

#endif //STACK_H
