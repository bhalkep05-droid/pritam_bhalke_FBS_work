#include <stdio.h>

struct SalesManager
{
    int id;
    char name[50];
    float salary;
    float incentive;
    float target;
};

int main()
{
    struct SalesManager s;

    printf("Enter Sales Manager ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Salary: ");
    scanf("%f", &s.salary);

    printf("Enter Incentive: ");
    scanf("%f", &s.incentive);

    printf("Enter Target: ");
    scanf("%f", &s.target);

    printf("\n--- Sales Manager Details ---\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("Salary = %.2f\n", s.salary);
    printf("Incentive = %.2f\n", s.incentive);
    printf("Target = %.2f\n", s.target);

    return 0;
}