#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abcdefgh";

    for (int i = 0; i<strlen(str); i++)
    {
        printf ("%x ", str[i] - 'a' + '0');
    }

    printf ("\n");

    return 0;
}