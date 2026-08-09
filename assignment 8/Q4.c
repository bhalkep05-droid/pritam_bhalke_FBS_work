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

    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d is Even\n", a[i]);
        }
        else
        {
            printf("%d is Odd\n", a[i]);
        }
    }
}