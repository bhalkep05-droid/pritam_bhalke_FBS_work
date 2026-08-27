#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i;
    int *arr, *brr, *crr;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    arr = (int *)malloc(n1 * sizeof(int));
    brr = (int *)malloc(n2 * sizeof(int));
    crr = (int *)malloc((n1 + n2) * sizeof(int));

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }

    // Copy first array
    for(i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }

    // Copy second array
    for(i = 0; i < n2; i++)
    {
        crr[n1 + i] = brr[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", crr[i]);
    }

    free(arr);
    free(brr);
    free(crr);

    return 0;
}