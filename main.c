#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sub(int expOne, int expTwo);
int add(int expOne, int expTwo);
int andf(int expOne, int expTwo);
int orf(int expOne, int expTwo);
int xorf(int expOne, int expTwo);
int shl(int expOne, int expTwo);
int shr(int expOne, int expTwo);
int asr(int expOne, int expTwo);
int rol(int expOne, int expTwo);
int ror(int expOne, int expTwo);

int main()
{
    int firstExpress;
    int secondExpress;
    char oper[4];

    printf("Type in an expression: ");
    scanf("%x %s %x", &firstExpress, oper, &secondExpress);
    if (strcmp("add", oper) == 0)
    {
        printf("The answer is: %x \n", add(firstExpress, secondExpress));
    }
    else if (strcmp("sub", oper) == 0)
    {
        printf("The answer is: %x \n", sub(firstExpress, secondExpress));
    }
    else if (strcmp("and", oper) == 0)
    {
        printf("The answer is: %x \n", andf(firstExpress, secondExpress));
    }
    else if (strcmp("or", oper) == 0)
    {
        printf("The answer is: %x \n", orf(firstExpress, secondExpress));
    }
    else if (strcmp("xor", oper) == 0)
    {
        printf("The answer is: %x \n", xorf(firstExpress, secondExpress));
    }
    else if (strcmp("shl", oper) == 0)
    {
        printf("The answer is: %x \n", shl(firstExpress, secondExpress));
    }
    else if (strcmp("shr", oper) == 0)
    {
        printf("The answer is: %x \n", shr(firstExpress, secondExpress));
    }
    else if (strcmp("asr", oper) == 0)
    {
        printf("The answer is: %x \n", asr(firstExpress, secondExpress));
    }
    else if (strcmp("rol", oper) == 0)
    {
        printf("The answer is: %x \n", rol(firstExpress, secondExpress));
    }
    else if (strcmp("ror", oper) == 0)
    {
        printf("The answer is: %x \n", ror(firstExpress, secondExpress));
    }
    else
    {
        printf("Invalid Input.");
    }
}

int add(int expOne, int expTwo)
{
    int temp = expOne + expTwo;
    return temp;
}

int sub(int expOne, int expTwo)
{
    int temp = expOne - expTwo;
    return temp;
}

int andf(int expOne, int expTwo)
{
    int temp = expOne & expTwo;
    return temp;
}

int orf(int expOne, int expTwo)
{
    int temp = expOne | expTwo;
    return temp;
}

int xorf(int expOne, int expTwo)
{
    int temp = expOne ^ expTwo;
    return temp;
}

int shl(int expOne, int expTwo)
{
    int i;
    for (i = 0; i < expTwo; i++)
    {
        expOne = expOne << 1;
    }
    return expOne;
}

int shr(int expOne, int expTwo)
{
    int i;
    for (i = 0; i < expTwo; i++)
    {
        expOne = expOne >> 1;
    }
    return expOne;
}

int asr(int expOne, int expTwo)
{
    int grab = (expOne >> 7) & 1;
    int temp = shr(expOne, expTwo);
    return (grab << 7) | temp;
}

int rol(int expOne, int expTwo)
{
    int msb = (expOne >> 7) & 1;
    int temp = shl(expOne, expTwo);
    if (msb == 0)
    {
        return temp << 1;
    }
    else
    {
        return temp | msb;
    }
}

int ror(int expOne, int expTwo)
{
    int msb = expOne & 1;
    int temp = shr(expOne, expTwo);
    if (msb == 0)
    {
        return temp >> 1;
    }
    else
    {
        return temp | msb;
    }
}









