#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    double average=(a+b+c)/3.0;
    printf("The average of the three numbers is:%f",average);
    return 0;
}