#include <stdio.h>
#include <string.h>

int main()
    {
    char s[] = "abcd\0\0efgh\0lmn\0";
    printf("Size of s[] is %d\n", sizeof(s)); 
    return 0;
    }