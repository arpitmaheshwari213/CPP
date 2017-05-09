#include <stdio.h>
#include <string.h>
int main()
{
   char s[] = "abcd\0\0efgh\0lmn\0";
   printf("String length is %d\n", strlen(s));
   return 0; 
 }