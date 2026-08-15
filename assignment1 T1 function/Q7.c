void calculator();

void main()
{
    calculator();
}

void calculator()
{
    int a, b;
    char ch;

    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("Enter Operator (+, -, *, /) : ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case '+':
            printf("Addition = %d", a + b);
            break;

        case '-':
            printf("Subtraction = %d", a - b);
            break;

        case '*':
            printf("Multiplication = %d", a * b);
            break;

        case '/':
            printf("Division = %d", a / b);
            break;

        default:
            printf("Invalid Operator");
    }
}