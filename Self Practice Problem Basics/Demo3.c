#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d \n",n>9 && n<100);
    return 0;
}