//
// Created by kitsc on 2024/8/10.
//

#include "LQueue.h"

int main()
{
    srand((unsigned int)time(NULL));
    LinkQueue Q;
    InitQueue(&Q);
    for (int i = 0; i < 200; i++)
    {
        int a = 100 + rand() % 10000;
        EnQueue(&Q, a);
    }
    Print(Q);

    DeQueue(&Q);
    Print(Q);
    int c = LenghtQueue(Q);
    printf("%d\n", c);

    int b = 0;
    GetHead(Q, &b);
    printf("%d\n",b);
    DestroyQueue(&Q);
    return 0;
}
