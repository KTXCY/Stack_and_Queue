//
// Created by kitsc on 2024/8/10.
//

#ifndef LQUEUE_H
#define LQUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef int QElemType;

typedef struct QNode {
    QElemType date;
    struct QNode *next;
} QNode, *QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
} LinkQueue;

bool InitQueue(LinkQueue *Q);

bool DestroyQueue(LinkQueue *Q);

bool EnQueue(LinkQueue *Q, QElemType e);

bool DeQueue(LinkQueue *Q);

void Print(LinkQueue Q);

int LengthQueue(LinkQueue Q);

bool GetHead(LinkQueue Q, QElemType *e);

#endif //LQUEUE_H
