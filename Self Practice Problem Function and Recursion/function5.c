#include<stdio.h>
#include<math.h>

void calculatePower(int num,int power);
int main()
{
    int num, power;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&power);
    calculatePower(num,power);
    return 0;
}
void calculatePower(int num,int power){
    int result=pow(num,power);
    printf("%d raised to the power %d is %d",num,power,result);
}
