//In an array of numbers find how many times does a number x occurs in an array
#include<stdio.h>
int main()
{
    int n,x,count=0;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the numbers in an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the number that how many times repeat in an array");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("%d occurs %d times:",x,count);

}