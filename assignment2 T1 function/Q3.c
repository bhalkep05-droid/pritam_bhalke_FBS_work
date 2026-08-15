void largest();

void main()
{
    largest();
}

void largest()
{
    int a, b, c;

    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("%d is Largest", a);
    }
    else if(b > a && b > c)
    {
        printf("%d is Largest", b);
    }
    else
    {
        printf("%d is Largest", c);
    }
}