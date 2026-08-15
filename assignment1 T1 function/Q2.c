void palindrome();

void main()
{
    palindrome();
}

void palindrome()
{
    int n, temp, rev, first, last, middle;

    printf("Enter 3 Digit Number : ");
    scanf("%d", &n);

    temp = n;

    first = temp / 100;
    middle = (temp / 10) % 10;
    last = temp % 10;

    rev = last * 100 + middle * 10 + first;

    if(n == rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
}