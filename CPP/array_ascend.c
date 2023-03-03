#include <stdio.h>

int main()
{
    int i, j, size, temp, array[100];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of an array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;                
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for(i=0; i<size; i++)
    {
        printf("%d\n", array[i]);
    }
}