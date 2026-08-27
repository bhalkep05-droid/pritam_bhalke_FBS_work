#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

int main()
{
    struct Complex c;

    printf("Enter Real Part: ");
    scanf("%f", &c.real);

    printf("Enter Imaginary Part: ");
    scanf("%f", &c.imaginary);

    printf("\n--- Complex Number ---\n");
    printf("Real = %.2f\n", c.real);
    printf("Imaginary = %.2f\n", c.imaginary);

    return 0;
}