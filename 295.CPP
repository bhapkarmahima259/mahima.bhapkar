#include<stdio.h>
#include<conio.h>
void main(){
char i,j;
clrscr();
for(i='E';i>='A';i--){
for(j='A';j<=i;j++){
printf("%c",i);
}
printf("\t\n");
}
getch();
}