void leapYear();

void main()
{
    leapYear();
}

void leapYear()
{
    int year;

    printf("Enter Year : ");
    scanf("%d", &year);

    if(year % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
}