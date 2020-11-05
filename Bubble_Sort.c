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
void swap(int a[],int i)
{
    int temp;
    temp=a[i+1];
    a[i+1]=a[i];
    a[i]=temp;
}
int Bubble_Sort(int a[],int n)
{
    int i,pass;
    for(pass=0;pass<n-1;pass++)
    {
        for(i=0;i<n-pass-1;i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a,i);
            }
        }
    }
}
void main()
{
    int a[100],n;
    printf("Enter number of elements in an array\n");
    scanf("%d",&n);
    
    accept(a,n);
    display(a,n);
    
    Bubble_Sort(a,n);
    
    display(a,n);
}