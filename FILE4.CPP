#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp,*back;
int arr[3]={12,10,13},n,i;
fp=fopen("num","w");
for(i=0;i<3;i++)
{fprintf(fp,"%d\n",arr[i]);
}
fclose(fp);
fp=fopen("num","r");
back=fopen("back","w");
while(1)
{
fscanf(fp,"%d",&n);
if(feof(fp))
break;
fprintf(back,"%d\n",n);
}

getch();
}