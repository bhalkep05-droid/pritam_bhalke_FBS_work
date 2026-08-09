#include <stdio.h>

void main()
{
    int a[5];
    int i;
    int search;
    int found = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Number is found");
    }
    else
    {
        printf("Number is not found");
    }
}