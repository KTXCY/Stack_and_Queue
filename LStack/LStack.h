//
// Created by kitsc on 2024/8/9.
//

#ifndef LSTACK_H
#define LSTACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef int SElemType;

typedef struct StackNode {
    SElemType data;
    struct StackNode *next;
} StackNode, *LinkStack;

bool InitStack(LinkStack *S);

bool DestroyStack(LinkStack *S);

bool Pust(LinkStack *S, SElemType e);

bool Pop(LinkStack *S);

void Print(LinkStack S);

bool StackEmpty(LinkStack S);

SElemType GetTop(LinkStack S);


#endif //LSTACK_H
