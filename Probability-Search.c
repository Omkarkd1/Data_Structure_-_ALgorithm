#include<stdio.h>
void accept(int a[],int n)
{
    int i;
    printf("ENter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    int i;
    printf("Array :-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void swap(int a[],int i)
{
	int temp;
	temp=a[i];
	a[i]=a[i-1];
	a[i-1]=temp;
}
int ProbabilitySearch(int a[],int n,int key)
{
    int i;
	a[n]=key;
	for(i=0;i<n;i++)
	{
	    if(a[i]==key)
		{   
			swap(a,i);
			return i;
		}
	}
	return -1;
}
void main()
{
    int a[100],n,key,flag;
    printf("Enter number of elements in an array\n");
    scanf("%d",&n);
    
    accept(a,n);
    display(a,n);
    
    printf("Enter element tobe search\n");
    scanf("%d",&key);
    
    flag=ProbabilitySearch(a,n,key);
    if(flag!=-1)
    {
        printf("Element is at %d possition\n",flag);
    }
    else
    {
        printf("Element not found\n");
    }
    display(a,n);
}