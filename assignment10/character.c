#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";

    char *ptr = strchr(str, 'l');

    printf("%s", ptr);

    return 0;
}