#include <stdio.h>

int main()
{
    int a[10], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if(pos >= 1 && pos <= n)
    {
        for(i = pos-1; i < n-1; i++)
        {
            a[i] = a[i+1];
        }

        n--;

        printf("New array:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Invalid position");
    }

    return 0;
}
