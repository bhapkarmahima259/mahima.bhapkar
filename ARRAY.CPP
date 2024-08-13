#include<stdio.h>
#include<conio.h>
void main(){
int i,length[6];
clrscr();
printf("print the elements of an array of length:");
for(i=0;i<6;i++)
{

scanf("%d",&length[i]);
}
for(i=6;i>=0;i--)
{
printf("%d",length[i]);
}
getch();
}
