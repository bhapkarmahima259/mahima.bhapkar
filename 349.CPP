#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=0;i<=7;i++){
 if(i%2==0){
 continue;
 }
for(k=1;k<=35-i;k++){
printf(" ");
}
for(j=1;j<=i;j++){
printf(" %d",j);
}
printf("\n");
}
getch();
}