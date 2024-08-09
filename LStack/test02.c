//
// Created by kitsc on 2024/8/9.
//

#include "LStack.h"


int main() {
    srand((unsigned int) time(NULL));

    StackNode *S;
    InitStack(&S);
    int a = 100;
    for (int i = 0; i < a; i++) {
        int a = 1 + rand() % 1000;
        Pust(&S, a);
    }
    Print(S);
    Pop(&S);
    Pop(&S);
    Pop(&S);
    Pop(&S);
    Pop(&S);
    Pop(&S);
    Pop(&S);
    Pop(&S);
    Pop(&S);
    Pop(&S);
    Print(S);
    bool c = StackEmpty(S);
    printf("%d\n", c);
    int b = GetTop(S);
    printf("%d\n", b);
    DestroyStack(&S);
    return 0;
}
