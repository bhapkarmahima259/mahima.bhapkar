#include<stdio.h>
#include<conio.h>
void main(){
char i,j;
clrscr();
for(i='A';i<='D';i++){
for(j='D';j>='A';j--){
printf("%c",i);
}
printf("\n");
}
getch();
}