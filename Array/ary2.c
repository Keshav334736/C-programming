#include <stdio.h>
int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;
    }

    return -1;
}
int main()
{
    int n, key, position;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    position = linearSearch(arr, n, key);

    if(position == -1)
    {
        printf("Key not found in the array.\n");
    }
    else
    {
        printf("Key found at position %d.\n", position + 1);
    }

    return 0;
}