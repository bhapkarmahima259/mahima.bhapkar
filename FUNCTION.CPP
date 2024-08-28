#include<stdio.h>
#include<conio.h>
void sum(int x,int y){
int result;
result=x+y;
printf("%d",result);
}
void main()
{
int num1,num2;
clrscr();
printf("enter the number:");
scanf("%d%d",&num1,&num2);
sum(num1,num2);

getch();
}