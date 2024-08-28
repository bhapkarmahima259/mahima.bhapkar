#include<stdio.h>
#include<conio.h>
int sum(int x,int y)
{
int result;
result=x+y;
return(result);
}
void main()
{
int num1,num2,result;
clrscr();
printf("enter the number:");
scanf("%d%d",&num1,&num2);
result=sum(num1,num2);
printf("%d",result);

getch();
}