//
// Created by kitsc on 2024/8/9.
//

#include "LStack.h"

bool InitStack(LinkStack *S) {
    (*S) = NULL;
    return true;
}

bool DestroyStack(LinkStack *S) {
    if (S == NULL) {
        return false;
    }
    while ((*S) != NULL) {
        StackNode *p = (*S);
        (*S) = (*S)->next;
        free(p);
        p = NULL;
    }
    (*S) = NULL;
    return true;
}

bool Pust(LinkStack *S, SElemType e) {
    if (S == NULL) {
        return false;
    }

    StackNode *p = (StackNode *) malloc(sizeof(StackNode));
    if (p == NULL) {
        return false;
    }
    p->data = e;
    p->next = (*S);
    (*S) = p;
    return true;
}

bool Pop(LinkStack *S) {
    if (S == NULL || (*S) == NULL) {
        return false;
    }
    StackNode *p = *S;
    (*S) = (*S)->next;
    free(p);
    return true;
}

void Print(LinkStack S) {
    int a = 0;
    while (S != NULL) {
        printf("%6d", S->data);
        S = S->next;
        a++;
        if (a % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

bool StackEmpty(LinkStack S) {
    if (S == NULL) {
        return true;
    } else {
        return false;
    }
}

SElemType GetTop(LinkStack S) {
    if (S != NULL) {
        return S->data;
    }
}
