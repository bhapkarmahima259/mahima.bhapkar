#include<stdio.h>
#include<conio.h>
void main(){
int h,sp,st;
clrscr();
for(h=1;h<=4;h++){
for(sp=1;sp<=100-h;sp++){
printf("");}
for(st=1;st<=h;st++){
printf("*");
}
printf("\n");
}
getch();
}