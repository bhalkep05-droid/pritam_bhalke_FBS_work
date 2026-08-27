#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I love programming";

    char *ptr = strstr(str, "programming");

    printf("%s", ptr);

    return 0;
}