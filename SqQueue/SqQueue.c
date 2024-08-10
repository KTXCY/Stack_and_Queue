//
// Created by kitsc on 2024/8/10.
//

#include "SqQueue.h"

bool InitSqQueue(SqQueue *Q) {
    if (Q == NULL) {
        return false;
    }
    Q->base = (SElemTye *) malloc(sizeof(SElemTye) * MAXSIZE);
    if (Q->base == NULL) {
        return false;
    }
    Q->front = Q->rear = 0;
    return true;
}

bool DesSqQueue(SqQueue *Q) {
    if (Q == NULL)
        return false;

    if (Q->base != NULL) {
        free(Q->base);
        Q->base = NULL;
    }
    Q->front = Q->rear = 0;
    return true;
}

bool EnQueue(SqQueue *Q, SElemTye e) {
    if (Q == NULL || Q->base == NULL) {
        return false;
    }
    if ((Q->rear + 1) % MAXSIZE == Q->front) {
        return false;
    }
    Q->base[Q->rear] = e;
    Q->rear = (Q->rear + 1) % MAXSIZE;
    return true;
}

bool DesQueue(SqQueue *Q) {
    if (Q == NULL || Q->base == NULL) {
        return false;
    }
    if (Q->front == Q->rear) {
        return false;
    }
    Q->front = (Q->front + 1) % MAXSIZE;
    return true;
}

void Print(SqQueue Q) {
    if (Q.front == Q.rear) {
        return;
    }
    int a = 0;
    while (Q.front % MAXSIZE != Q.rear) {
        printf("%4d", Q.base[Q.front]);
        Q.front = (Q.front + 1) % MAXSIZE;
        a++;
        if (a % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

int LenQueue(SqQueue Q) {
    return ((Q.rear - Q.front + MAXSIZE) % MAXSIZE);
}

SElemTye GetTop(SqQueue Q) {
    if (Q.front != Q.rear) {
        return Q.base[Q.front];
    }
}
