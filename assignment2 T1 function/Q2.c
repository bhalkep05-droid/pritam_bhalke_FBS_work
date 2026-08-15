void triangle();

void main()
{
    triangle();
}

void triangle()
{
    int a, b, c;

    printf("Enter Three Sides : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c)
    {
        printf("Equilateral Triangle");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
}