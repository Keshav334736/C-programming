//Make your own pow function
#include<stdio.h>
int myPow(int base,int power);

int main()
{
    int base,power;
    printf("Enter the base and power:");
    scanf("%d %d",&base,&power);
    int result=myPow(base,power);
    printf("%d raised to the power of %d is %d\n",base,power,result);
    return 0;
}
int myPow(int base,int power){
    int result=1;
    for(int i=1;i<=power;i++){
        result=result*base;
    }
    return result;
}