#include <stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct Time t;

    printf("Enter Hour: ");
    scanf("%d", &t.hour);

    printf("Enter Minute: ");
    scanf("%d", &t.min);

    printf("Enter Second: ");
    scanf("%d", &t.sec);

    printf("\n--- Time Details ---\n");
    printf("Hour = %d\n", t.hour);
    printf("Minute = %d\n", t.min);
    printf("Second = %d\n", t.sec);

    return 0;
}