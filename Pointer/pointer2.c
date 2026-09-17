#include<stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr=&x;
    *ptr=0; 
    printf("X=%d",x);
    printf("\n*ptr=%d",*ptr);

    *ptr+=5;  //This is-equivalent to x=x+5;
    printf("\nX=%d",x); //Output:5
    printf("\n*ptr=%d",*ptr); //Output:5

    (*ptr)++; //This is equivalent to x=x+1;
    printf("\nX=%d",x); //Output:6
    printf("\n*ptr=%d",*ptr); //Output:6

    return 0;
}