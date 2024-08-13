#include<stdio.h>
#include<conio.h>
void main(){
int num,x,revnum=0;
clrscr();
printf("enter the number:");
scanf("%d",&num);
printf("number is %d",num);
while(num>=1){
x=num%10;
revnum=revnum*10+x;
num=num/10;
}
getch();
}