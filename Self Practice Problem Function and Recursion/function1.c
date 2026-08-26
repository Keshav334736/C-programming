#include<stdio.h>
//function declaration
void Namaste();
void Bonjour();
int main()
{
    printf("Enter your nationality f for french and i for indian:");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        Namaste(); //function call
    }
    else if(ch=='f'){
        Bonjour(); //function call
    }
    else{
        printf("Invalid input\n");
    }

return 0;
}
//function definition

void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}