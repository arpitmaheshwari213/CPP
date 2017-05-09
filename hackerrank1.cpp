#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100];
    int l,i,j,c,s,h=1;
 
    scanf("%s",&a);
    while(h)
    {    
    l=strlen(a);
    i=0;
        s=0;
    
    
    while(i<l)
       { j=i+1;
        c=1;
        while(a[i]==a[j])
        {  c++;
           j++;
        }
     
        if(c%2!=0)
         {
      a[s]=a[i];
        s++;
        }
       if(s>=2&&a[s-1]==a[s-2])
           h=1;
        else
            h=0;
         i=j;
       }
    a[s]='\0';
    }
    
    if(s==0)
        printf("Empty String");
    else
        printf("%s",a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}