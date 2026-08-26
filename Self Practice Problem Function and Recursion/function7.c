//WAP to convert a celsius temperature to fahrenheit
#include<stdio.h>
float convertTemp(float celsius);
int main()
{
    float celsius;
    printf("Enter a temperature in celsius to convert it to fahrengheit:");
    scanf("%f",&celsius);
float result=convertTemp(celsius);
printf("%.2f celsius is equal to %.2f fahrenheit",celsius,result);
    return 0;
}
float convertTemp(float celsius){
    float fahrenheit=(celsius*9.0/5.0)+32.0;
    return fahrenheit;
}