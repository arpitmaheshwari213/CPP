#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
char name[10];
int marks;
};
void main()
{ int i,j;
  student stud[4];
  strcpy(stud[0].name,"ar1");
  strcpy(stud[1].name,"ar2");
  strcpy(stud[2].name,"ar3");
  strcpy(stud[3].name,"ar4");
  stud[0].marks=23;
  stud[1].marks=20;
  stud[2].marks=24;
  stud[3].marks=21;
  student *sort[4];
  for(i=0;i<4;i++)
  {sort[i]=&stud[i];
  }
  for(i=0;i<4;i++)
  {for(j=0;j<4-i-1;j++)
   {if(sort[j]->marks>sort[j+1]->marks)
    {student *temp;
    temp=sort[j];
    sort[j]=sort[j+1];
    sort[j+1]=temp;
    }
   }
  }
 for(i=0;i<4;i++)
 {printf("sorted order is");
 printf("name:%s",sort[i]->name);
 printf("marks:%d\n",sort[i]->marks);
 }

getch();
}