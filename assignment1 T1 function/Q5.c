void voting();

void main()
{
    voting();
}

void voting()
{
    int age;

    printf("Enter Age : ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Eligible for Voting");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}