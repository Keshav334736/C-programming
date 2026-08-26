//WAP to find the square root of a number
#include<stdio.h>
#include<math.h>

float findSqrt(float num);
int main()
{
    float num;
    printf("Enter a number to find its square root:");
    scanf("%f",&num);

    float sqrt=findSqrt(num);
    if(sqrt!=-1){
        printf("The square root of %.2f is %.2f\n", num, sqrt);
    }
}
float findSqrt(float num){
    if(num<0){
        printf("Error: Square root of a negative number is not defined.\n");
        return -1;
    }
    if(num==0 || num==1){
        return num;
    }
    float result=pow(num,0.5);
    return result;
}
