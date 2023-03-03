#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp[7] = {0};
    
    for(int i=1, j=0; i>=0, j<2; i--, j++)
    {
        temp[j] = arr[i];
    }

    for(int i=(length-1), j=2; i>=2, j<7; i--,j++)
    {
        temp[j] = arr[i];
    }

    printf("{ ");
    for(int i=(length-1); i>=0; i--)
    {
        printf("%d  ", temp[i]);
    }
    printf("}");

    return 0;

}