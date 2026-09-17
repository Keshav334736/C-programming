#include<stdio.h>

int main()
{
    int age=22;
    int *ptr=&age; //Pointer variable that holds the address of age
   
    // //address of age
    // // printf("%p\n",&age);
    // printf("%u\n",&age); //%u is used to print the address in unassigned integer format
    // printf("%u\n",ptr); //ptr also holds the address of age
    // printf("%u\n",&ptr); //Address of ptr

    //Value
    printf("%d\n",age); //Value of age
    printf("%d\n",*ptr); //Output :22
    printf("%d\n",*(&age));
    return 0;
}