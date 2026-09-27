//FINDING OUT SIMPLE INTEREST

#include<stdio.h>
#include<conio.h>
void main()
{
float P,R,T,SI;
clrscr();
printf("ENTER PRINCIPLE VALUE:");
scanf("%f",P);
printf("ENTER RATE OF INTEREST:");
scanf("%f",R);
printf("ENTER NUMBER OF YEARS:");
scanf("%f",T);
SI=(P*R*T)/100;
printf("\nSIMPLEINTEREST=%f",SI);
getch();
}

