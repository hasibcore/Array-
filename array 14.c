/* 14.Write a program in C to count the total number of duplicate elements in an array.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
1 2 3 1 2
Output:
total number of duplicate elements : 2 */

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
    printf("The array's elements : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     int count=0;
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
              break;
            }
        }

    }
    printf("\ntotal number of duplicate elements : %d",count);
}
