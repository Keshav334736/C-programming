#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Your age is %d",age);
        printf("\n You are eligible to vote");
    }
    else{
        printf("Your age is %d",age);
        printf("\n You are not eligible to vote");
    }
    return 0;
}