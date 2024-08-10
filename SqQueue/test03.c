//
// Created by kitsc on 2024/8/10.
//

#include "SqQueue.h"



int main() {
    srand((unsigned int) time(NULL));
    SqQueue Q;
    InitSqQueue(&Q);
    for (int i = 0; i < 100; i++) {
        if (i >= MAXSIZE + 1) {
            break;
        }
        int a = 1 + rand() % 100;
        EnQueue(&Q, a);
    }
    Print(Q);
    DesQueue(&Q);
    Print(Q);

    int c = LenQueue(Q);
    printf("%d\n", c);


    int d = GetTop(Q);
    printf("%d\n", d);

    DesSqQueue(&Q);
    return 0;
}
