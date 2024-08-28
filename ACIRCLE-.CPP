#include<stdio.h>
#include<conio.h>
float area(){
float result,r;
clrscr();
printf("enter the number:");
scanf("%f",&r);
result=3.14*r*r;
return(result);
}
void main(){
float f;
f=area();
printf("area of circle %f",f);
getch();
}