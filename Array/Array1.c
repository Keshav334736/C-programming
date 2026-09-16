#include<stdio.h>
int main()
{
    float price[3];
    printf("Enter the price of Milk:");
    scanf("%f",&price[0]);

    printf("Enter the price of Sugar:");
    scanf("%f",&price[1]);

    printf("Enter the price of Biscuit:");
    scanf("%f",&price[2]);

    float Cost=price[0]+price[1]+price[2];
    float Final_Cost=Cost+0.18*Cost;
    printf("Final Cost With  GST:%f",Final_Cost);

    return 0;

}