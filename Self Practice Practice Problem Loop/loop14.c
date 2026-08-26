// wap to print the prime numbers in range
#include<stdio.h>
int main()
{
    int n, flag; // flag=0 means assume prime
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        flag=0; // reset flag for each number
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                flag=1;  // not prime
                break;
            }
        }
        if(flag==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
