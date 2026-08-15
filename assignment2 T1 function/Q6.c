void calculator();

void main()
{
    calculator();
}

void calculator()
{
    int a, b, choice;

    printf("===== MENU =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Your Choice : ");
    scanf("%d", &choice);

    printf("Enter Two Numbers : ");
    scanf("%d%d", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Addition = %d", a + b);
            break;

        case 2:
            printf("Subtraction = %d", a - b);
            break;

        case 3:
            printf("Multiplication = %d", a * b);
            break;

        case 4:
            printf("Division = %d", a / b);
            break;

        default:
            printf("Invalid Choice");
    }
}