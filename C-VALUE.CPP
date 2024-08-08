#include<stdio.h>
#include<conio.h>
void main(){
float i,n=1,d=1,s=0;
clrscr();
for(i=0;i<4;i++){
s=s+n/d;
n=n+2;
d=d*2;
}
printf("calculate value:%f",&s);
getch();
}
