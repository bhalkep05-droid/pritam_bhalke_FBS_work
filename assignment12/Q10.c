#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    for(i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    // Check palindrome
    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Palindrome");
    }

    return 0;
}