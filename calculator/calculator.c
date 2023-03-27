#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void sum();
int main()
{
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
    if (symbol==43){
        sum();
    }
    printf("\nThank you for using this calculator!");
    return 0;
}
void sum(){
    double x,y;
    printf("\nInsert your numbers:");
    scanf("%lf%lf",&x,&y);
    printf("\nThe sum of %.1lf + %.1lf is %.1lf\n",x,y,x+y);}