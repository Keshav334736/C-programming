//Write a function to print "Hot" or "Cold" based on the temperature input by the user;
#include<stdio.h>
void printTemperatureStatus(float temperature);

int main()
{
    float temperature;
    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    printTemperatureStatus(temperature);
    return 0;
}

void printTemperatureStatus(float temperature)
{
    if(temperature > 30)
    {
        printf("Hot\n");
    }
    else
    {
        printf("Cold\n");
    }
}