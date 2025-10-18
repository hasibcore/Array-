//Write a program in C to insert a new value at a particular position of an array.
#include<stdio.h>
int main()
{
    int n,i,value=20,index;
      printf("Enter Array Size: ");
    scanf("%d",&n);
    int a[n+1];
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
    for(i=n;i>=index-1;i--)
    {
        a[i]=a[i-1];
    }
    a[index-1]=value;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}
