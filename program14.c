#include <stdio.h>

int main()
{
    int a[10], n, i, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if(n < 10)
    {
        printf("Enter new number: ");
        scanf("%d", &num);

        a[n] = num;
        n++;

        printf("New array:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Array is full");
    }

    return 0;
}
