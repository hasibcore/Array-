/*Write a program in C to print all unique elements in an array.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
1 2 3 1 4
Output:
Unique elements : 2 3 4 */
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
     int e=0;
     printf("\nUnique elements :");
 for(i=0;i<n;i++)
    {
  if(a[i]!=0)
  {
      int count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                count++;
                a[j]=0;
            }
        }
        if(count==0)
        {
           printf("%d ",a[i]);
        }
  }

    }
}

