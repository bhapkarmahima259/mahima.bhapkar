#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
clrscr();
for(i=7;i>=1;i--){
if(i%2==0){
continue;
}
for(j=1;j<=35-i;j++){
printf(" ");
}
for(k=1;k<=i;k++){
printf(" %d",i);
}
printf("\n");
}
getch();
}