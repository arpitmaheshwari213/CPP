#include <stdio.h>
#include <string.h>

int main()
{
    int *iPtr = (int *)1234;
   char *cPtr = (char *)"12345";

    printf("Size of iPtr is %d and Size of cPtr is %d \n", sizeof(iPtr), sizeof(cPtr));

    return 0;
}