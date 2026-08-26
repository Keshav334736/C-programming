//WAP to find the factorial of a number using recursion.
#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number to find its factorial:");
    scanf("%d",&n);
    printf("The factorial of %d is:%d",n,factorial(n));
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1; //Base case
    }
    int factNm1=factorial(n-1); //Factorial of n-1
    int factN=factNm1*n; //Factorial of n
    return factN;
}