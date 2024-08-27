#include<stdio.h>
#include<conio.h>
void main(){
char m,n;
clrscr();
for(m=65;m<=67;m++){
for(n=1;n<=5;n++){
if(n==1){
printf("\n%c",m);}
else{
printf("%c",m+32);
}
}
}
getch();
}
