#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void sum();
void substraction();
void multiplication();
void division();
void s_root();
void power();
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
    else if(symbol==45){
        substraction();
        }
    else if(symbol==42){
        multiplication();
        }
    else if(symbol==47){
        division();
        }
    else if(symbol==115){
        s_root();
        }
    else if(symbol==94){
        power();
        }
    printf("\nThank you for using this calculator!");
    return 0;
}
void sum(){
    double x,y;
    printf("\nInsert your numbers:");
    scanf("%lf%lf",&x,&y);
    printf("\nThe sum of %.1lf + %.1lf is %.1lf\n",x,y,x+y);}
void substraction(){
    double x,y;
    printf("\nInsert your numbers:");
    scanf("%lf%lf",&x,&y);
    printf("\nThe substraction of %.1lf - %.1lf is %.1lf",x,y,x-y);
    printf("\nand the substraction of %.1lf - %.1lf is %.1lf\n",y,x,y-x);}
void multiplication(){
    double x,y;
    printf("\nInsert your numbers:");
    scanf("%lf%lf",&x,&y);
    printf("\nThe multiplication of %.1lf * %.1lf is %.1lf\n",x,y,x*y);}
void division(){
    double x,y;
    printf("\nInsert your numbers:");
    scanf("%lf%lf",&x,&y);
    printf("\nThe division of %.1lf / %.1lf is %.1lf",x,y,x/y);
    printf("\nand the division of %.1lf / %.1lf is %.1lf\n",y,x,y/x);}
void s_root(){
    double x;
    printf("\nInsert your number: ");
    scanf("%lf",&x);
    printf("\nThe square root of %.1lf is %.1lf\n",x,sqrt(x));}
void power(){
    double x,y;
    printf("\nFirst insert the base number and then the power: ");
    scanf("%lf%lf",&x,&y);
    printf("\nThe number %.1lf raise to the power of %.1lf is %.1lf\n",x,y,pow(x,y));}