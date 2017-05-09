  #include<iostream.h>
  #include<conio.h>
  #include<stdio.h>
    int arr[100];
   void merge_sort(int[],int,int);
   void merge(int[],int,int,int);
   void output(int[],int);

   void main()
 {
    int start,end;
    int size,i;
    clrscr();

    cout<<"Enter the array size: ";
    cin>>size;

    start=0;
    end=size-1;

    for(i=0;i<size;i++)
   {
    cout<<"Enter the value : ";
    cin>>arr[i];
   }
   merge_sort(arr,start,end);
   output(arr,size);
   getch();
 }

   void merge_sort(int arr[],int start,int end)
 {

   if(start!=end)
  {int mid;
    mid=(start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
    printf("mid=%d\n",mid);
    printf("start=%dend=%d\n",start,end);
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
	 tmp[i]=arr[k];
    }
     else
    {
       for(k=j;k<=mid;k++)
	 tmp[i]=arr[k];
    }
      for(k=start;k<=end;k++)
      {	arr[k]=tmp[k];
	printf("%d",arr[k]);
 }
 printf("\n");
  }
    void output(int arr[],int size)
  {
    int k;
    cout<<"Sorted array is:"<<endl;
    for(k=0;k<size;k++)
    cout<<arr[k]<<" ";
  }