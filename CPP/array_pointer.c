#include <stdio.h>

int main()
{
    char *ptr = "Geeksforgeeks";
    printf("%s\n", &*&*&*&*ptr);
    //getchar();
    return 0;
}