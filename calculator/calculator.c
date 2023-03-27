#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    double number_1,number_2;
    char operation;

    printf("1-Sum of two numbers \"+\"");
    printf("\n2-Substraction of two numbers \"-\"");
    printf("\n3-Multiplication of two numbers \"*\" ");
    printf("\n4-Division of two numbers \"/\"");
    printf("\n5-Square root of a number \"s\"");
    printf("\n6-Power of a number \"^\"");
    printf("\nChoose the symbol of the operation you want to do: ");
    operation=getchar();
    int symbol=operation;
    printf("\nThank you for using this calculator!");
    return 0;
}