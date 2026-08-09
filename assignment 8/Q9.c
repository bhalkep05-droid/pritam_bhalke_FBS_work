#include <stdio.h>

void main()
{
    int a[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Reverse array:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}