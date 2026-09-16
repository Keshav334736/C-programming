//WAP in C to insert an element at the end of an array
#include<stdio.h>
int main()
{
    int arr[100],n,element;
    printf("Enter how many no of elements in array you want to input:");
    scanf("%d",&n);

    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element do you want to add at the end of an array:");
    scanf("%d",&element);

    arr[n]=element;
    n++;

    printf("Array after insertion the new elements:");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}