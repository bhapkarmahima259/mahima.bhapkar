#include<stdio.h>
#include<conio.h>
void main(){
int l[7],i;
clrscr();
printf("enter the element of array:");
for(i=0;i<=7;i++){
scanf("%d",&l[i]);
}
for(i=0;i<=7;i++){
if(l[i]<=0)
l[i]=100;
}
for(i=0;i<=7;i++)
{
printf("%d\n",l[i]);
}
getch();
}