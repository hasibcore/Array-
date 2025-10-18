//Write a program in C to insert a new value at the end of an array.
#include<stdio.h>
int main()
{
    int n,i,value=20;
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
     printf("After adding :\n");
     a[n]=value;
     for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
