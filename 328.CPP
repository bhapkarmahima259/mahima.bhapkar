#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
clrscr();
for(i=1;i<=4;i++){
for(k=1;k<=35-i;k++){
printf(" ");}
for(j=1;j<=i;j++){
printf(" %d",i);}
printf("\n");}

getch();
}