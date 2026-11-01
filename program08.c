#include <stdio.h>

int main()
{
    int a[5], b[10] = {0};
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        b[i*2] = a[i];
    }

    printf("Second array:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
