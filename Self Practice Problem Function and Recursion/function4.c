#include<stdio.h>

void calculatePrice(float value);
int main()
{
float value=100.0;
calculatePrice(value);
printf("\nThe original price is %f",value);
return 0;
}
void calculatePrice(float value){
    value=value+(0.18*value);
    printf("The price after adding GST is :%f",value);
}
