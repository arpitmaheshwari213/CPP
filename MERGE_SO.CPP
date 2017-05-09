  #include<iostream.h>
  #include<stdio.h>
  #include<conio.h>

   int size,arr[100];
   void merge_sort(int[],int,int);
   void merge(int[],int,int,int);


   void main()
 {
    int i,k,start,end;
    clrscr();
   printf("enter the no.  of elements ");
   scanf("%d",&size);

    for(i=0;i<size;i++)
   {
    cout<<"Enter the value : ";
    cin>>arr[i];
   }
   start=0;
   end=size-1;
   merge_sort(arr,start,end);
    cout<<"Sorted array is:"<<endl;
    for(k=0;k<size;k++)
    cout<<arr[k]<<" ";
   getch();
 }

   void merge_sort(int arr[],int start,int end)
 {
   if(start!=end)
  {  int mid;
    mid=(start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);

  }
 }

   void merge(int arr[],int start,int mid,int end)
 {
   int i,j,k,m,tmp[100];
   j=start;
   m=mid+1;

    for(i=start;j<=mid && m<=end;i++)
  {
     if(arr[j]<=arr[m])
    {
      tmp[i]=arr[j];
      j++;
    }
     else
    {
      tmp[i]=arr[m];
      m++;
    }
  }
     if(j>mid)
    {
       for(k=m;k<=end;k++)
      {
       tmp[i]=arr[k];
       i++;
      }
    }
     else
    {
       for(k=j;k<=mid;k++)
      {
	tmp[i]=arr[k];
	i++;
      }
    }
     for(k=start;k<=end;k++)
     { arr[k]=tmp[k];

       }

 }

