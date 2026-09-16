//WAP in C to find the largest number in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers in an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

int largestN;
    for(int i=0;i<n;i++){
        largestN=arr[0];
        if(arr[i]>arr[0]){
           largestN=arr[i];
        }
    }
    printf("Largest Number in an array is:%d",largestN);
    return 0;
}