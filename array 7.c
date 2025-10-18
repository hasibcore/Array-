//Write a program in C to find a value in the array.
#include<stdio.h>
int main()
{
    int n,i,value=20,count=0;
     printf("Enter Array Size: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array's elements : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(a[i]==value)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nNot found");
    }
    else
        {
        printf("\nFound");
        }

}
