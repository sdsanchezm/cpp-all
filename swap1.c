#include <stdio.h>

void swap1(int array1[]);
int printArray1(int array1[]);

const int ARRAY_SIZE = 9;

int main(void)
{
    int array1[] = {1,2,3,4,5,6,7,8,9};
    swap1(array1);
    printArray1(array1);

}

void swap1(int array1[])
{
    int tempVar = 0;
    for (int i = 0; i < 4; i++)
    {

        tempVar = array1[i];
        array1[i] = array1[ARRAY_SIZE -1 - i];
        array1[ARRAY_SIZE - 1 - i] = tempVar;
    }
}


int printArray1(int array1[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%i ", array1[i]);
    }
    printf("\n");
}
