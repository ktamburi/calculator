#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sum(double x,double y);
void substraction(double x,double y);
double multiplication(double x,double y);
void division(double x,double y);

int main()
{
    double number_1,number_2;
    int operation=0;
    int decision=0;

    printf("1-Sum of two numbers ");
    printf("\n2-Substraction of two numbers ");
    printf("\n3-Multiplication of two numbers ");
    printf("\n4-Division of two numbers ");
    printf("\n5-Square root of a number ");
    printf("\n6-Power of a number ");

    for(;decision==0;){
    printf("\nChoose the number of the operation you want to do: ");
    scanf("%d",&operation);

    if (operation==1){
        printf("\nInsert your numbers:");
        scanf("%lf%lf",&number_1,&number_2);
        printf("\nThe sum of %.1lf + %.1lf is %.1lf\n",number_1,number_2,sum(number_1,number_2));
    }
    else if(operation==2){
        printf("\nInsert your numbers:");
        scanf("%lf%lf",&number_1,&number_2);
        substraction(number_1,number_2);
    }
    else if(operation==3){
        printf("\nInsert your numbers:");
        scanf("%lf%lf",&number_1,&number_2);
        printf("\nThe multiplication of %.1lf * %.1lf is %.1lf\n",number_1,number_2,multiplication(number_1,number_2));
    }
    else if(operation==4){
        printf("\nInsert your numbers:");
        scanf("%lf%lf",&number_1,&number_2);
        division(number_1,number_2);
    }
    else if(operation==5){
        printf("\nInsert your number: ");
        scanf("%lf",&number_1);
        printf("\nThe square root of %.1lf is %.1lf\n",number_1,sqrt(number_1));
    }
    else if(operation==6){
        printf("\nFirst insert the base number and then the power: ");
        scanf("%lf%lf",&number_1,&number_2);
        printf("\nThe number %.1lf raise to the power of %.1lf is %.1lf\n",number_1,number_2,pow(number_1,number_2));
    }
    else
        printf("\nThe operation number you inserted is incorrect. Please try again.");

    printf("\nIf you want to continue to use the calculator insert 0 otherwise press any number: ");
    scanf("%d",&decision);
    }
    printf("Thank you for using this calculator!");
    return 0;
}


double sum(double x,double y){
    return x+y;
}
void substraction(double x,double y){
    printf("\nThe substraction of %.1lf - %.1lf is %.1lf",x,y,x-y);
    printf("\nand the substraction of %.1lf - %.1lf is %.1lf\n",y,x,y-x);
}
double multiplication(double x,double y){
    return x*y;
}
void division(double x,double y){
    printf("\nThe division of %.1lf / %.1lf is %.1lf",x,y,x/y);
    printf("\nand the division of %.1lf / %.1lf is %.1lf\n",y,x,y/x);
}
