#include<stdio.h>
int calcPercentage(int science,int math,int sanskrit);
int main()
{
    int sc=98, math=95, sanskrit=99;
    int percentage=calcPercentage(sc, math, sanskrit);
    printf("The percentage is: %d", percentage);
    return 0;
}
int calcPercentage(int science,int math,int sanskrit){
    return(science+math+sanskrit)/3;
}