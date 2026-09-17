#include<stdio.h>
int main()
{
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d\n",**pptr); //**pptr gives the value of i because pptr holds the address of ptr and  ptr holds the address of i
    return 0;
}