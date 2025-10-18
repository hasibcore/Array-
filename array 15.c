/*Write a program in C to count the frequency of each element of an array.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
99 2 99 1 2
Output:
The frequency of 99 is 2.
The frequency of 2 is 2.
The frequency of 1 is 1 */

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


    for(i=0;i<n;i++)
    {
        int count =1;
        if(a[i]!=0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                a[j]=0;
                }

            }
            printf("\nThe frequency of %d is %d",a[i],count);
        }
    }
}
