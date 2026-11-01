#include <stdio.h>

int main()
{
    int a[11], i, n;

    printf("Enter 10 numbers:\n");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter new number: ");
    scanf("%d", &n);

    a[0] = n;

    printf("New array:\n");

    for(i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
