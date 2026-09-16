#include <stdio.h>
void accept(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    accept(arr, n);

    printf("Array in reverse order: ");
    display(arr, n);
    return 0;
}