#include<stdio.h>
#include<conio.h>
void main(){
int i,j;
clrscr();
for(i=1;i<=4;i++){
for(j=5;j>=i;j--){
printf("%d",i);}
printf("\t\n");}
getch();
}