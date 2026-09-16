#include<stdio.h>
int main(){
    int n,i,j;
    int num,isPrime,count=0;
    int prime[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        isPrime=1;
        if(num<2){
            isPrime=0;
        }
        for(j=2;j<num;j++){
            if(num%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            prime[count]=num;
            count++;
        }
    }
    printf("Prime numbers entered are: ");
    for(i=0;i<count;i++){
        printf("%d ",prime[i]);
    }
    return 0;
}