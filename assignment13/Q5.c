#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements are:\n");

    for(i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}