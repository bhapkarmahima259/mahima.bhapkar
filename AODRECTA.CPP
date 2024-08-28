#include<stdio.h>
#include<conio.h>
area main(int l,int b){
int result;
clrscr();
result=2*(l+b);
return(result);}
void main(){
int num1,num2;
printf("enter the number:");
scanf("%d%d",&num1,&num2);
int r;
r=area(num1,num2);
printf("%d",r);
getch();
}

