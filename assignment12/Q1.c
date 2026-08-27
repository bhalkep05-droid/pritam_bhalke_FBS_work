#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character found at position %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Character not found");
    }

    return 0;
}