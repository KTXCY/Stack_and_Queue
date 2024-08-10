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



typedef int QElemTye;

typedef struct SqQueue {
    QElemTye *base;
    size_t front;
    size_t rear;
} SqQueue;


bool InitSqQueue(SqQueue *Q);

bool DesSqQueue(SqQueue *Q);

bool EnQueue(SqQueue *Q, QElemTye e);

bool DesQueue(SqQueue *Q);

void Print(SqQueue Q);

int LenQueue(SqQueue Q);

QElemTye GetTop(SqQueue Q);


#endif //SQQUEUE_H
