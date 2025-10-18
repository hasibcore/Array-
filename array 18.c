//Write a program to sort array in ascending order
#include<stdio.h>
int main()
{
    int n,i,j;
      printf("Enter Array Size: ");
    scanf("%d",&n);
    int a[n],ar[n];
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
     int temp;

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
         if(a[j]<a[i])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }


}
  printf("\nThe ascending array's elements : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
