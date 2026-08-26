//Write a function to print the sum of digits of a number.
#include<stdio.h>
int sumDigits(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumDigits(num));
    return 0;
}
int sumDigits(int num){
    int sum=0;
    while(num>0){
        sum=sum+num%10; //Extract the last digit and add it to sum
        num=num/10; //Remove the last digit
    }
    return sum;
}
