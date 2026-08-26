//Sum of first n natural numbers
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1,j=n;i<=n && j>=1;i++,j--){
        sum+=i;
        printf("%d\n",j);
    }
    printf("Sum of first n natural numbers is %d\n",sum);   
    return 0;
}
