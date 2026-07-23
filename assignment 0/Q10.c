void main()
{
    int sub1 = 80;
    int sub2 = 75;
    int sub3 = 90;
    int sub4 = 85;
    int sub5 = 70;
    int total;
    float percentage;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%", percentage);
}