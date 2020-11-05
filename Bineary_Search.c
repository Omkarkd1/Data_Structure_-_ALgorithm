#include<stdio.h>
void accept(int a[],int n)
{
    int i;
    printf("Enter array elements\n");
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
int BinearySearch(int a[],int n,int key)
{
    int lb=0,ub=n-1,mid,i;
	while(lb<=ub)
	{
	    mid=(lb+ub)/2;
		if(a[mid]>key)
		{
			ub=mid-1;
		}
		else if(a[mid]<key)
		{
			lb=mid+1;
		}
		else if(a[mid]==key)
		{
			return mid;
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
    
    printf("Enter element to search\n\n");
    scanf("%d",&key);
    
    flag=BinearySearch(a,n,key);
    if(flag!=-1)
    {
        printf("\n\nElement is at %d possition\n",flag+1);
    }
    else
    {
        printf("Element not found\n");
    }
}
