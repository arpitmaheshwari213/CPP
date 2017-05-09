#include<iostream.h>
#include<conio.h>
#define size 100
void build_max_heap(int arr[],int);
void max_heapify(int arr[],int,int);

void main()
{
	int arr[size],n,temp,k;
	clrscr();
	cout<<"Enter no. of elements : ";
	cin>>n;
	k=n;
	cout<<"\nStart entering elements to sort : \n";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(  ;n>0;n--)
	{
		build_max_heap(arr,n);
		temp=arr[0];
		arr[0]=arr[n-1];
		arr[n-1]=temp;
	}
	cout<<"\n\nElements after sorting are : ";
	for(i=0;i<k;i++)
		cout<<arr[i]<<" ";
	getch();
}
void build_max_heap(int arr[],int n)
{
    for(int i=n/2;i>=0;i--)
	{
		max_heapify(arr,i,n);
	}
}
void max_heapify(int arr[],int i,int n)
{
	//CASE I: Node with two children
	if(2*i+2 < n)
	{
		if(arr[2*i+1] > arr[2*i+2])
		{
			if(arr[2*i+1] > arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[2*i+1];
				arr[2*i+1]=temp;
			}
		}
		else
		{
			if(arr[2*i+2] > arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[2*i+2];
				arr[2*i+2]=temp;
			}
		}
	}
	//CASE II: Node with single child
	else if(2*i+1 < n)
	{
		if(arr[2*i+1] > arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[2*i+1];
				arr[2*i+1]=temp;
			}
	}
	//CASE III: Leaf Node(no child) then do nothing
}
