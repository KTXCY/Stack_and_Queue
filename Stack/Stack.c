//
// Created by kitsc on 2024/8/4.
//

#include "Stack.h"

// 初始化一个栈
bool InitSqStack(SqStack *S) {
    if (S == NULL) {
        return false;
    }
    S->base = (SElemType *) malloc(sizeof(SElemType) * MAXSIZE);
    if (S->base == NULL) {
        return false;
    }
    S->top = S->base;
    S->length = MAXSIZE;
    return true;
}

// 销毁一个栈
bool DestroySqStack(SqStack *S) {
    if (S == NULL) {
        return false;
    }
    if (S->base == NULL) {
        return false;
    } else {
        free(S->base);
        S->length = 0;
        S->base = S->top = NULL;
    }

    return true;
}

// 入栈
bool Push(SqStack *S, SElemType e) {
    if (S == NULL || S->base == NULL) {
        return false;
    }
    if (S->top - S->base == S->length) {
        return false;
    }
    *S->top = e;
    S->top++;
    return true;
}

// 出栈
bool Pop(SqStack *S) {
    if (S == NULL || S->base == NULL) {
        return false;
    }
    if (S->top == S->base) {
        return false;
    }
    S->top--;
    return true;
}

// 打印栈中的元素
void Print(SqStack S) {
    while (S.base != S.top) {
        printf("%d ", *S.base);
        S.base++;
    }
    printf("\n");
}

int StackLength(SqStack S) {
    if (S.base == NULL) {
        return false;
    }
    if (S.top == S.base) {
        return false;
    }
    return S.top - S.base;
}

bool ClearStack(SqStack *S) {
    if (S == NULL || S->base == NULL) {
        return false;
    } else {
        S->top = S->base;
    }
    return true;
}

bool StackEmpty(SqStack S) {
    if (S.top == S.base) {
        return true;
    } else {
        return false;
    }
}
