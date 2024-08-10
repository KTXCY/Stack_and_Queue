//
// Created by kitsc on 2024/8/10.
//

#ifndef SQQUEUE_H
#define SQQUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define MAXSIZE 1000



typedef int SElemTye;

typedef struct SqQueue {
    SElemTye *base;
    size_t front;
    size_t rear;
} SqQueue;


bool InitSqQueue(SqQueue *Q);

bool DesSqQueue(SqQueue *Q);

bool EnQueue(SqQueue *Q, SElemTye e);

bool DesQueue(SqQueue *Q);

void Print(SqQueue Q);

int LenQueue(SqQueue Q);

SElemTye GetTop(SqQueue Q);


#endif //SQQUEUE_H
