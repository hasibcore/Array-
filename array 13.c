/*13.Write a program in C to find the maximum and minimum element in an array.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2
Output:
The maximum element is 300.
The minimum element is 1. */
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
int max=a[0],min=a[0];
 for(i=1;i<n;i++)
 {
     if(a[i]>max)
     {
         max=a[i];
     }
     if(a[i]<min)
     {
         min=a[i];
     }
 }
printf("\nThe maximum element is %d",max);
printf("\nThe minimum element is %d",min);
}
