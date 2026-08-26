#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=0){
        printf("The number is positive \n");
        if(num%2==0){   //Nested if statement
            printf("\nThe number is even");  
        }
        else{
            printf("\nThe number is odd");
        }
    }
    else{
        printf("The number is negative");
    }
    return 0;
}