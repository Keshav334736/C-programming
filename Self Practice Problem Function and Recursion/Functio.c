//WAP in C to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array in reverse order are:");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
