#include<stdio.h>
#include<conio.h>
void main(){
float inch,cm;
clrscr();
printf("input the distance in cm:");
scanf("%f",&cm);
inch=0.393*cm;
printf("distance of cm in inches:%f",inch);
getch();
}