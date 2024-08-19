#include<stdio.h>
#include<conio.h>
void main()
{
int n,result;
clrscr();
printf("enter an number:");
scanf("%d",&n);
if(n>51)
{
result=3*(n-51);
}

else{
result=n-51;
printf("the result is %d",result);
}
getch();
}
