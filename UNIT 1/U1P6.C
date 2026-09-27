// average

#include<stdio.h>
#include<conio.h>
void main()
{
float num1,num2,num3,average;
clrscr();
printf("enter first number:");
scanf("%f",&num1);
printf("enter second number:");
scanf("%f",&num2);
printf("enter third number:");
scanf("%f",&num3);
average=(num1+num2+num3)/3;
printf("average=%.2f",average);
getch();
}