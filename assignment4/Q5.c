void main()
{
    int n, choice;
    int temp, rem, rev = 0, sum = 0;
    int i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMenu\n");
    printf("1. Even or Odd\n");
    printf("2. Prime or Not\n");
    printf("3. Palindrome or Not\n");
    printf("4. Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(n % 2 == 0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;

        case 2:
            if(n <= 1)
            {
                printf("Not Prime");
            }
            else
            {
                count = 0;
                for(i = 1; i <= n; i++)
                {
                    if(n % i == 0)
                        count++;
                }

                if(count == 2)
                    printf("Prime Number");
                else
                    printf("Not Prime");
            }
            break;

        case 3:
            temp = n;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if(rev == n)
                printf("Palindrome Number");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if(n > 0)
                printf("Positive Number");
            else if(n < 0)
                printf("Negative Number");
            else
                printf("Zero");
            break;

        case 5:
            temp = n;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);
            break;

        case 6:
            temp = n;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of Digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }
}