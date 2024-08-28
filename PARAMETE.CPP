#include<stdio.h>
#include<conio.h>
int area(){
int parameter,num1,num2;
clrscr();
printf("enter the number:");
scanf("%d%d",&num1,&num2);
parameter=num1+num2;
return(parameter);
}
void main(){
int r;
r=area();
printf("%d",r);
getch();
}
