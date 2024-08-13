#include<stdio.h>
#include<conio.h>
void main(){
int x=0,y,z;
clrscr();
printf("print the positive number:");
scanf("%d",&z);
y=z;
if(y<1||y>999){
printf("the given number is out the digit:");
}
else{
x+=y%10;
y/=10;
x+=y%10;
y/=10;
x+=y%10;
printf("sum of all digits:%d",z,x);
}
getch();
}