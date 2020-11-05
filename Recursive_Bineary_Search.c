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
int Recursive_Bineary_Search(int a[],int LB,int UB,int key)
{

	int mid;
    if(LB<=UB)
    {
        mid=(UB+LB)/2;

        if(a[mid]==key)
        {
        return mid+1;
        }
        if(key<a[mid])
        {
        return Recursive_Bineary_Search(a,LB,mid-1,key);
        }
        if(key>a[mid])
        {	
        return Recursive_Bineary_Search(a,mid+1,UB,key);
        }
    }
    else 
        {
            return -1;
        }
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
    
    flag=Recursive_Bineary_Search(a,0,n-1,key);
    if(flag!=-1)
    {
        printf("\n\nElement is at %d possition\n",flag);
    }
    else
    {
        printf("Element not found\n");
    }
}