#include<stdio.h>
#include<conio.h>
int area(float r){
float result;

result=3.14*r*r;
return(result);
}
void main(){
float c;
clrscr();
printf("enter the number:");
scanf("%f",&c);
float m;

m=area(c);
printf("area of circlr:%f",m);

getch();
}