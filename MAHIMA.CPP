#include<stdio.h>
#include<conio.h>
void main(){
float km,m,ft,in,cm;
printf("enter the distance in kilometer");
scanf("%f",&km);
m=km*1000;
in=km*39370.07;
ft=km*3280.8;
cm=km*100000;
printf("the equivalent distance in meter is%f",m);
printf("the equivalent distance in feets is %f",ft);
printf("the equivalent distance in inches is %f",in);
printf("the equivalent distance in centimeters is %f",cm);
getch();
}