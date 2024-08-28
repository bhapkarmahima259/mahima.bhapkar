#include<stdio.h>
#include<conio.h>
void area(int l,int b){
int parameter;
parameter=(l+b);
printf("%d",parameter);
}
void main()
{
int num1,num2;
clrscr();
printf("enter the number:");
scanf("%d%d",&num1,&num2);
area(num1,num2);
getch();
}