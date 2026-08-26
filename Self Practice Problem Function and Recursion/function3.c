#include<stdio.h>
//Function Declaration
void printTable(int n);
int main()
{
    int n;
    printf("Enter a number to print the table:");
    scanf("%d",&n);
    printTable(n); //Function Call
    return 0;
}
void printTable(int n){   //Function Definition
    for(int i=1;i<=10;i++){
        int table=n*i;
        printf("%d x %d = %d\n",n,i,table);
    }
}