#include<stdio.h>
#include<conio.h>
void main(){
char i,j;
clrscr();
for(i='E';i<='A';i++){
for(j='E';j<=i;j++){
printf("%c",i);
}
printf("\n");
}
getch();
}