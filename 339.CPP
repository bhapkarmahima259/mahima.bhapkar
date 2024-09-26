#include<stdio.h>
#include<conio.h>
void main(){
char i,j,k;
clrscr();
for(i='A';i<='D';i++){
for(k=1;k<=35-i;k++){
printf("  ");}
for(j='A';j<=i;j++){
printf(" %c",i);
}
printf("\n");}
getch();}