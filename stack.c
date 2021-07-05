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

void push()
{
}

int pop(struct stacc stack)
{
    int item = stack.items[stack.total-1];
    stack.total--;
    return item;
}

int main()
{
    return 0;
}