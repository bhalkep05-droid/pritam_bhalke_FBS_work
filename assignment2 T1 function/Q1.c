void checkNumber();

void main()
{
    checkNumber();
}

void checkNumber()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    if(n > 0)
    {
        printf("Positive Number");
    }
    else if(n < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }
}