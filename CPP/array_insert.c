#include <stdio.h>
int main()
{
    int n, value, i;
    int arr[100], position;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //  printf("Enter position of the element : ");
    //  scanf("%d",&position);
    printf("Enter value to insert : ");
    scanf("%d",&value);
    arr[i] = value;
    printf("New array is :  ");
    for(i=0; i<n+1; i++)
    {
        printf("%d ",arr[i]);
    }
    getchar();
    // for(int i=n-1; i<position-1; i--)
    // {
    //     arr[i+1] = arr[i];
    // }
    // arr[position-1] = value;
    // printf("Elements of the array after insertion : ");
    // for(int i=0; i<=n; i++)
    // {
    //     printf("%d  \n",arr[i]);
    // }
    return 0;
}