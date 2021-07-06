// stack
// LIFO
// main operations: pushing and popping
// use an array
// stack will be of type int

#include <stdio.h>

struct stacc
{
    int maxsize;
    int total;
    int items[128];
};

void push(struct stacc stack, int item)
{
    stack.items[stack.total] = item;
    printf("%d pushed\n", item);
    stack.total++;
}

int pop(struct stacc stack)
{
    int item = stack.items[stack.total-1];
    printf("%d removed\n", item);
    stack.total--;
    return item;
}

int main()
{
    struct stacc stack;
    push(stack, 3);
    push(stack, 7);
    push(stack, 1423);
    pop(stack);
    return 0;
}