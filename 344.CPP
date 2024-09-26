#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i='A';i<='G';i++){
if(i%2!=1){
continue;
}
for(k=1;k<=35-i;k++){
printf(" ");}
for(j='A';j<=i;j++){
printf("%c ",i);}
printf("\n");}

getch();
}