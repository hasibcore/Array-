//Write a C program to put even and odd elements of an array in two separate arrays.
#include<stdio.h>
int main()
{
    int n,i,e=0,o=0;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n],even[n],odd[n];
    printf("Enter the array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array's elements: ");
     for(i=0;i<n;i++)
    {
        if(i<n-1)
            {
            printf("%d,",arr[i]);
            }
        else
            {
            printf("%d",arr[i]);
            }

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[e]=arr[i];
            e++;
        }
        else
        {
            odd[o]=arr[i];
            o++;
        }
    }
    printf("\nThe array of even numbers :");
    for(i=0;i<e;i++)
    {
        if(even[i]!=0)
        {
          if(i<e-1)
            {
            printf("%d,",even[i]);
            }
        else
            {
            printf("%d",even[i]);
            }
        }

    }
     printf("\nThe array of odd numbers :");
    for(i=0;i<o;i++)
    {
        if(odd[i]!=0)
        {
       if(i<(o-1))
            {
            printf("%d,",odd[i]);
            }
        else
            {
            printf("%d",odd[i]);
            }
    }
        }

}
