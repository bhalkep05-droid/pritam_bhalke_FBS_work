#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};

int main()
{
    struct Distance d;

    printf("Enter Feet: ");
    scanf("%d", &d.feet);

    printf("Enter Inch: ");
    scanf("%d", &d.inch);

    printf("\n--- Distance Details ---\n");
    printf("Feet = %d\n", d.feet);
    printf("Inch = %d\n", d.inch);

    return 0;
}