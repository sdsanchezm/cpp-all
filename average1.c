#include <stdio.h>

int average1(int x, int y, int z);

const int ARRAY_SIZE = 9;

int main(void)
{
    int x = 2;
    int y = 5;
    int z = 9;
    int average = average1(x, y, z);
    printf("average: %i\n", average);

}

int average1(int x, int y, int z)
{
    int temp = (int)((x + y + z) / (3));
    float temp2 = ((x + y + z) / (3.0));
    // printf("temp: %i \n temp2: %i\n", temp, temp2);
    if ((temp2 - temp) < 0.5)
        {
            return temp;
        }
        else
        {
            return (temp + 1);
        }
}