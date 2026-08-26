#include<stdio.h>
//function with parameters and return type
int sum(int a,int b); //Function declaration
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    int result =sum(a,b); //Function Call
    printf("The sum is :%d",result); 

    return 0;
}
int sum(int a,int b ){  //Function definition
    return a+b;

}