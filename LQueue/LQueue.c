//
// Created by kitsc on 2024/8/10.
//

#include "LQueue.h"

bool InitQueue(LinkQueue *Q) {
    Q->front = Q->rear = (QNode *) calloc(sizeof(QNode), 1);
    if (Q->front == NULL) {
        return false;
    }
    Q->front->next = NULL;
    return true;
}

bool DestroyQueue(LinkQueue *Q) {
    while (Q->front != NULL) {
        QNode *p = Q->front;
        Q->front = Q->front->next;
        free(p);
    }
    Q->front = Q->rear = NULL;
    return true;
}

bool EnQueue(LinkQueue *Q, QElemType e) {
    if (Q->front == NULL) {
        return false;
    }
    QNode *p = (QNode *) malloc(sizeof(QNode));
    if (p == NULL) {
        return false;
    }
    p->date = e;
    p->next = NULL;
    Q->rear->next = p;
    Q->rear = p;
    return true;
}

bool DeQueue(LinkQueue *Q) {
    if (Q->front == NULL) {
        return false;
    }
    if (Q->front == Q->rear) {
        return false;
    }
    QNode *p = Q->front->next;
    Q->front->next = p->next;
    if (Q->rear == p) {
        Q->rear = Q->front;
    }
    free(p);
    p = NULL;
    return true;
}

void Print(LinkQueue Q) {
    if (Q.front == Q.rear) {
        return;
    }
    int a = 0;
    QNode *p = Q.front->next;
    while (p != NULL) {
        printf("%6d", p->date);
        p = p->next;
        a++;
        if (a % 1000 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

int LenghtQueue(LinkQueue Q) {
    if (Q.front == Q.rear) {
        return 0;
    } else {
        int length = 0;
        QNode *p = Q.front->next;
        while (p != NULL) {
            length++;
            p = p->next;
        }
        return length;
    }
}

bool GetHead(LinkQueue Q, QElemType *e) {
    if (Q.front == Q.rear) {
        return false;
    }
    (*e) = Q.front->next->date;
    return true;
}
