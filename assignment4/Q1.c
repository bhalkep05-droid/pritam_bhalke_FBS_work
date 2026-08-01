void main()
{
    int n, i, temp, rem, sum, digits;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++)
    {
        temp = i;
        digits = 0;
        sum = 0;

        // Count number of digits
        while(temp > 0)
        {
            digits++;
            temp = temp / 10;
        }

        temp = i;

        // Calculate Armstrong sum
        while(temp > 0)
        {
            int power = 1;
            rem = temp % 10;

            for(int j = 1; j <= digits; j++)
            {
                power = power * rem;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}