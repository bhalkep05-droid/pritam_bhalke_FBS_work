void main()
{
    int num, first, second, third;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;

    if(first == third)
    {
        printf("%d is a Palindrome Number.", num);
    }
    else
    {
        printf("%d is not a Palindrome Number.", num);
    }
}