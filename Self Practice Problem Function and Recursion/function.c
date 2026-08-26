#include<stdio.h>

void printHello(); //Function declaration
void printGoodbye(); //Function Declaration

int main()
{
printHello(); //Function call
printGoodbye(); //Function call
return 0;
}

void printHello(){   //Function Definition
    printf("Hello\n"); 
}
void printGoodbye(){   //Function Definition
    printf("Goodbye\n");
}
  
