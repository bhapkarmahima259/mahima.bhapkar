#include<stdio.h>
#include<conio.h>
void main(){
char i,j;
clrscr();
for(i='E';i>='B';i--){
for(j='A';j<='E';j++){
printf("%c",j);
}
printf("\n");
}
getch();
}