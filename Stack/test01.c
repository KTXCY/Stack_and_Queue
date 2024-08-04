//
// Created by kitsc on 2024/8/4.
//

#include "Stack.h"

int main() {
    SqStack S;
    InitSqStack(&S);
    Push(&S, 1);
    Push(&S, 2);
    Push(&S, 2);
    Push(&S, 4);
    Push(&S, 5);
    Push(&S, 6);
    Print(S);
    Pop(&S);
    Print(S);
    int a = StackLength(S);
    printf("%d\n", a);
    bool b = StackEmpty(S);
    printf("%d\n", b);
    bool c = ClearStack(&S);
    printf("%d\n", c);
    DestroySqStack(&S);
    return 0;
}
