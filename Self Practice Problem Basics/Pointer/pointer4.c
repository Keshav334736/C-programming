#include<stdio.h>
void Square(int n);
void Squares(int* n);

int main()
{
    int number;
    printf("Enter a number to find its square:");
    scanf("%d",&number);
    Square(number);
    printf("The number:%d\n",number);
    Squares(&number);
    printf("The number:%d\n",number);
    return 0;
}

void Square(int n)
{
    n=n*n;
    printf("The square of the number is:%d\n",n);
  
}
void Squares(int* n)
{
    *n=(*n)*(*n);
    printf("The square of the number is:%d\n",*n);
}