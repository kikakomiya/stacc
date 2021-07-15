#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Behold, a stack
    // Who knew it was so easy?
    int total = 0;
    int stacc[256];

    for (;;)
    {
        printf("1 - Push a number\n2 - Pop the top\n-1 - Exit\nChoose operation: ");
        int ops;
        scanf("%d", &ops);

        switch (ops)
        {
            case -1:
                exit(0);
            case 1:
                if (total == 256)
                {
                    printf("ERR: stack full\n");
                    break;
                }
                else
                {
                    printf("Enter number you want to push: ");
                    int push;
                    scanf("%d", &push);
                    stacc[total] = push;
                    total++;
                    break;
                }
            case 2:
                if (total == 0)
                {
                    printf("ERR: stack empty\n");
                    break;
                }
                else
                {
                    printf("%d\n", stacc[total-1]);
                    total--;
                    break;
                }
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
