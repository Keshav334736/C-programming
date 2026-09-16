//Create a 2D storing the tables of 2 and 3
#include<stdio.h>

void storeTable(int arr[][10],int n,int m,int number);
int main()
{
    int table[2][10];

    storeTable(table,0,10,2); //print the table of 2;
    storeTable(table,1,10,3); //print the table of 3;

     for(int i=0;i<10;i++){
        printf("%d\t",table[0][i]);  //0 to 9
    }

    printf("\n");

     for(int i=0;i<10;i++){
        printf("%d\t",table[1][i]);  //0 to 9
    }


}
void storeTable(int arr[][10],int n,int m,int number){
    for(int i=0;i<m;i++){  //0 to 9
        arr[n][i]=number*(i+1); 
        }
}
