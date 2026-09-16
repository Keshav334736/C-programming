#include<stdio.h>
void freqCount(int arr[],int n){
    int freq[100]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        if(freq[i]!=0){
            printf("Element %d occurs %d times\n",i,freq[i]);
        }
    }
}
int main(){
    int n;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    freqCount(arr,n);
    return 0;
}