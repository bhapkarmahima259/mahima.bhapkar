#include<stdio.h>
#include<conio.h>
int area(){
int result,l,b;
clrscr();
printf("enter the number:");
scanf("%d%d",&l,&b);
result=2*(l+b);
return(result);
}
void main(){
int r;
r=area();
printf("%d",r);
getch();
}