//Write a program in C to delete an element at the desired position from an array.
#include<stdio.h>
int main()
{
    int n,i,index;
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
    printf("\nEnter a position to insert a value :");
    scanf("%d",&index);
    for(i=index-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("After deleting array is :");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
}
