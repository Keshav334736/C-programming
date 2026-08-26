//WAP to check if a given character is digit or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("%d \n",ch>='0' && ch<='9');
    return 0;
}