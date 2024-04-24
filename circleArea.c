#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

//Code for calculating circle area and perimeter with functions

void  calculateArea(int r)
{
    float result= 3.14 *r*r;
    printf(" Area : %.2f \n", result);
}

void  environmentCalculate(int r)
{
    float result= 2*3.14*r;
    printf(" Environment : %.2f ", result);
}
int main(int arhc, char *argv[])
{
    setlocale(LC_ALL, "");

    int number;
    printf(" Enter Radius : "); scanf("%d", &number);
    calculateArea(number);
    environmentCalculate(number);
    return 0;
}