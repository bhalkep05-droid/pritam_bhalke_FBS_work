#include <stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};

int main()
{
    struct Date d;

    printf("Enter Date: ");
    scanf("%d", &d.date);

    printf("Enter Month: ");
    scanf("%d", &d.month);

    printf("Enter Year: ");
    scanf("%d", &d.year);

    printf("\n--- Date Details ---\n");
    printf("Date = %d\n", d.date);
    printf("Month = %d\n", d.month);
    printf("Year = %d\n", d.year);

    return 0;
}