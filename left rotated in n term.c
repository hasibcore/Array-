//11 Write a C program to n term left rotate an array.
#include<stdio.h>
int main()
{
    int n,i,j;
      printf("Enter Array Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array's elements : \n");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
int term;
printf("Enter left roated term :");
scanf("%d",&term);
printf("After roated :");
    for(i=0;i<term;i++)
    {

        int temp=a[0];
        for(j=0;j<n-1;j++)
   {
       a[j]=a[j+1];
   }
        a[j]=temp;
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
