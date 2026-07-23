void main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an Uppercase Alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is a Lowercase Alphabet.", ch);
    }
    else
    {
        printf("%c is not an Alphabet.", ch);
    }
}