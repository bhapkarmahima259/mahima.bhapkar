#include<stdio.h>
#include<conio.h>
void sub(int x,int y){
int result;
result=x-y;
printf("%d",result);
}
void main()
{
int num1,num2;
clrscr();
printf("enter the number:");
scanf("%d%d",&num1,&num2);
sub(num1,num2);
getch();
}