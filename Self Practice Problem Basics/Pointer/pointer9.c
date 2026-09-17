#include<stdio.h>
int main()
{
    int age=22;
    int _age=23;
    int *ptr1=&age;
    int *ptr2=&_age;

    printf("%u,%u difference=%u\n",ptr2,ptr1,ptr1-ptr2);
    ptr2=&age;
    printf("Comparison=%u\n",ptr1==ptr2);

    return 0;

}