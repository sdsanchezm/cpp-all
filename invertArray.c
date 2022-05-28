#include <stdio.h>

int invertArray1(int array1[]);
int printArray1(int array1[]);

const int ARRAY_SIZE = 9;

int main(void)
{
    int array1[] = {1,2,3,4,5,6,7,8,9};
    printArray1(array1);
    invertArray1(array1);
    printArray1(array1);
}

int invertArray1(int array1[])
{
    int temp[9];

    for (int i = 0; i < 9; i++)
    {
        temp[8-i] = array1[i];
    }
    for (int i = 0; i < 9; i++)
    {
        array1[i] = temp[i];
    }
    // return *temp;
}

int printArray1(int array1[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%i ", array1[i]);
    }
    printf("\n");
}
