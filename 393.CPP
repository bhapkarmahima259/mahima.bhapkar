#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,p=5;
clrscr();
for(i=7;i>=1;i--){
if(i%2==0)
{
continue;}
p=p-1;
for(k=1;k<=35-i;k++){
printf(" ");
}
for(j=1;j<=i;j++){
printf(" %d",p);
}
printf("\n");
}
getch();
}