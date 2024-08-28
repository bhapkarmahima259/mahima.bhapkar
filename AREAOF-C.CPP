#include<stdio.h>
#include<conio.h>
void area(float r){
float result;
clrscr();
result=3.14*r*r;
printf("area od circle:%f",result);
}
void main(){
float c;
clrscr();
printf("enter the number:");
scanf("%f",&c);
area(c);
getch();
}
