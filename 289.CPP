#include<stdio.h>
#include<conio.h>
void main()
{
char i,j;
clrscr();
for(i='A';i<='D';i++){
for(j='A';j<=i;j++){
printf("%c",j);}
printf("\n");
}
getch();
}