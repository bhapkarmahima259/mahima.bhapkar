#include<stdio.h>
#include<conio.h>
void area(int l,int b){
int rectangle;
rectangle=2*(l+b);
printf("%d",rectangle);
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