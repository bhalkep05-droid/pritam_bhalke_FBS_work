#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr, *brr, *crr;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(n * sizeof(int));

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);

    return 0;
}