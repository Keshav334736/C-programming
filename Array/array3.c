//Write a function to reverse an array
#include<stdio.h>
void arrReverse(int arr[],int n);
int main()
{
    int n;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    arrReverse(arr,n);
    return 0;

}
void arrReverse(int arr[],int n) {
    printf("Array:");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i] );
    }

    //Reversing an array
    printf("Reversed Array:");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }

}
