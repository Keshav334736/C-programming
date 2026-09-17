//WAP in C to print all the letters in english alphabet using pointers
#include<stdio.h> //header file

int main()
{
    char alphabet[26]; //Array to hold the letters of the alphabet
    char *ptr;  //Pointer variable to traverse the array
    for(int i=0;i<26;i++){
        alphabet[i]='A'+i; //Assigning letters to the array
    }
    ptr=&alphabet[0]; //Pointer to the first element of the array
    printf("The Letters of the English alphabet are:\n");
    for(int i=0;i<26;i++){
        printf("%c ",*ptr); //Derefrencing the pointer to get the value of the letter
        ptr++; //Moving the pointer to the next element of the array
    }
}

