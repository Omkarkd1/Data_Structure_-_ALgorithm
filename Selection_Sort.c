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
//function for   Selection sort
void Selection_Sort(int a[],int n)
{
    int min,i,temp,j;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        
        if(i!=min)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}
void main()
{
   int a[100],n;
   printf("Enter no of elements in an array\n");
   scanf("%d",&n);
   //Call to accept function
   accept(a,n);
   //call to display function
   display(a,n);

   //call to   Selection sort
   Selection_Sort(a,n);
   
   printf("Sorted ");
   display(a,n);
}