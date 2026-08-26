// wap to print sum of n natural numbers using recursion
#include<stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter a number to find the sum of n natural numbers:");
    scanf("%d",&n);
    printf("The sum of %d natural numbers is:%d",n,sum(n));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1; //Base case
    }
    int SumNm1=sum(n-1); //Sum of n-1 natural numbers
    int SumN=SumNm1+n; //Sum of n natural numbers
    return SumN;
}