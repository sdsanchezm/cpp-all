#include <stdio.h>
#include <stdint.h>

int round1(float number);
typedef uint8_t  BYTE;

BYTE average(BYTE x, BYTE y, BYTE z);
BYTE roundFloatToByte(float number);

int roundFloatToInt(float number);

int main(void)
{
    float x1 = 34.5422;
    float x2 = 34.4422;
    uint8_t b1 = 0x00;
    uint8_t b2 = 0xFF;
    uint8_t b9 = 0x09;
    uint8_t b6 = 0x16;
    uint8_t b4 = 0x14;
    uint8_t bx = 0x00;

    b2 += 2;
    int number1 = round1(x1);
    // printf("n1: %i\n", number1);
    printf("b1: %i\n", b1);
    int number2 = round1(x2);
    // printf("n2: %i\n", number2);
    printf("b2: %i\n", b2);

    bx = average(b9, b6, b4);
    // bx = (int)((b9 + b6 + b4) / 3.0);
    printf("bx: %i\n", bx);

    int kk1 = (int)b6;
    printf("bx: %i\n", kk1);
    printf("bx-hexa: %X\n", kk1);

    kk1 += 1;
    printf("bx: %i\n", kk1);
    printf("bx-hexa: %X\n", kk1);

    int originalRed = 50;
    int originalGreen = 190;
    int originalBlue = 90;

    float kk2 = (0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue);
    kk2 = round1(kk2);
    printf("kk2: %f\n", kk2);

    uint8_t t1 = 0xFE;
    int t2 = (int)t1 + 10;
    printf("t2: %i\n", t2);

    int t3 = 257;
    uint8_t t4 = (uint8_t)t3;
    if (t3 > 255) {t4 = 0xFF;}
    printf("t3: %i\n", t3);
    printf("t4: %i\n", t4);

    int y1 = 0;
    printf("y1: %i\n", roundFloatToInt(2.4999));
    int y2 = 0;
    printf("y2: %i\n", roundFloatToInt(2.50001));

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

// rounding function from float to Byte (uint8_t)
BYTE roundFloatToByte(float number)
{
    BYTE temp = (int)(number);
    if ((number - temp) < 0.5)
    {
        return temp;
    }
    else
    {
        return temp + 1;
    }
}

int roundFloatToInt(float number)
{
    int temp = (int)(number);
    if ((number - temp) < 0.5)
    {
        return temp;
    }
    else
    {
        return temp + 1;
    }
}

BYTE average(BYTE x, BYTE y, BYTE z)
{
    int x1 = (int)x;
    int x2 = (int)y;
    int x3 = (int)z;

    float temp = ( (x1 + x2 + x3) / 3.0);
    return roundFloatToByte(temp);
}