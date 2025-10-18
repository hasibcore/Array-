//Write a C program to right rotate an array.
#include<stdio.h>
int main()
{
    int n,i;
      printf("Enter Array Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array's elements : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   int temp=a[n-1];
for(i=n-1;i>=0;i--)
{
    a[i]=a[i-1];
}
a[0]=temp;
 printf("\nAfter the right roated array's elements : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   }
