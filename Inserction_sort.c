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
//function for Inserction sort
void Inserction_sort(int a[],int n)
{
   int i,j;
   for(i=1;i<n;i++)
   {
       key=a[i]
       for(j=i-1;j>=0;j--)
       {
           if(key<a[j])
           {
               a[j+1]=a[j];
           }
           else
           {
               break;
           }
        a[j+1]=key;
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

   //call to inserction sort
   Inserction_Sort(a,n);
   
   display(a,n);
}