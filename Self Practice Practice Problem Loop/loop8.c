#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++){
        if(i==4){
            break; //break statement
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
}