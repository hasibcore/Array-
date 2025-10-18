//Write a program in C to read n number of values in an array and display it in reverse order.
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
       printf("\nThe Reversed array's elements : ");
    for(i=n-1;i>=0;i--)
    {
          printf("%d ",a[i]);
    }
}
