void main()
{
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op)
    {
        case '+':
            printf("Addition = %d", num1 + num2);
            break;

        case '-':
            printf("Subtraction = %d", num1 - num2);
            break;

        case '*':
            printf("Multiplication = %d", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Division = %d", num1 / num2);
            else
                printf("Division by zero is not possible.");
            break;

        case '%':
            if(num2 != 0)
                printf("Modulus = %d", num1 % num2);
            else
                printf("Modulus by zero is not possible.");
            break;

        default:
            printf("Invalid Operator");
    }
}