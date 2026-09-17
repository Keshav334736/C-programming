//WAP in c to find the maximum number between two numbers using pointers
#include<stdio.h>
int findMax(int *a,int *b);
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    int max=findMax(&num1,&num2);
    printf("The maximum number is:%d",max);
    return 0;
}
int findMax(int *a,int *b){
    if(*a>*b){
        return *a;
    }
    else {
        return *b;
    }
}