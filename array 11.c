//11 Write a C program to left rotate an array.
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
   int temp=a[0];
   for(i=0;i<n-1;i++)
   {
       a[i]=a[i+1];
   }
   a[n-1]=temp;
   printf("\nAfter left rotated the array's elements : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
