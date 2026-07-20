void main()
{
    int minutes = 130;
    int hours, rem_minutes;

    hours = minutes / 60;
    rem_minutes = minutes % 60;

    printf("Total Minutes = %d\n", minutes);
    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d", rem_minutes);
}