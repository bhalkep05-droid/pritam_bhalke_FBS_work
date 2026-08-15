void grade();

void main()
{
    grade();
}

void grade()
{
    float per;

    printf("Enter Percentage : ");
    scanf("%f", &per);

    if(per >= 75)
    {
        printf("Distinction");
    }
    else if(per >= 60)
    {
        printf("First Class");
    }
    else if(per >= 50)
    {
        printf("Second Class");
    }
    else if(per >= 35)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
}