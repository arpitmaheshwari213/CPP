#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display()
typedef struct AA
{
int info;
struct AA*next;
}node;

void main()
{  int i;
node *start,*ptr1,*ptr2;
for(i=1;i<=10;i++)
if(i==1)
{
start=(node*)malloc(sizeof (node));
scanf("%d",&start->info);
ptr1=start;
}
else
{
ptr2=(node*)malloc(sizeof (node));
scanf("%d",&ptr2->info);
ptr1->next=ptr2;
ptr1=ptr2;
}
}