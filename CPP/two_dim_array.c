#include <stdio.h>


int main()
{
    int array[3][4] = {
        {70, 90, 80, 75},
        {65, 75, 60, 55},
        {50, 65, 75, 80}
    };

    char* sub[3] = {"English", "Maths", "Science"};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Student %d marks in %s subject is %d\n", j,sub[i], *(*(array+i)+j));
        }
    }
    return 0;
}