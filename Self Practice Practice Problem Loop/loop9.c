#include<stdio.h>
int main()
{
    int n;
    do{
        printf("Enter a number:");
        scanf("%d",&n);
        printf("You entered: %d\n",n);
        if(n%7==0){   // multiple of 7
            break; //break statement
        }
    }while(1);
    printf("Than You!!");
    return 0;
}
