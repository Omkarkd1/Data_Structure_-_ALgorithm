#include<stdio.h>
// accept function to store elements in array
void accept(int a[],int n)
{
    int i;
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
//display function to display array elements
void display(int a[],int n)
{
    int i;
    printf("Array elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int SentinalSearch(int a[],int n,int key)
{
    int i;
    a[n]=key;
    for(i=0;i<=n;i++)
    {
        if(key==a[i])
        {
            
            return i;
        }
    }
}
void main()
{
    //a = Array,n = Number of elements in an array, key = Element to be searched 
    int a[100],n,key,flag;
    
    printf("Enter number of elements\n");
    scanf("%d",&n);
    
    accept(a,n);
    display(a,n);
    
    printf("\nEnter elemens to search\n");
    scanf("%d",&key);
    
    flag=SentinalSearch(a,n,key);
    
    if(flag!=n)
    {
        printf("Element is at %d possition\n",flag);
    }
    else
    {
        printf("Element is not in array\n");
    }
}