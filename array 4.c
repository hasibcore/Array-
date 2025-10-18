/* Write a program in C to find the sum of all elements of the array.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2
Output:
The sum of your array elements is : 504 */
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements for your array:");
    scanf("%d",&n);
    int a[n],sum=0;
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of your array elements is :%d",sum);
}
