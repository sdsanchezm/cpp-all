#include <stdio.h>

int round1(float number);

int main(void)
{
    float x1 = 34.5422;
    float x2 = 34.4422;
    int number1 = round1(x1);
    printf("n1: %i\n", number1);
    int number2 = round1(x2);
    printf("n2: %i\n", number2);
}

int round1(float number)
{
    int temp = (int)(number);
    float temp2 = (number);
    if ((temp2 - temp) < 0.5)
    {
        return temp;
    }
    else
    {
        return (temp + 1);
    }
}
