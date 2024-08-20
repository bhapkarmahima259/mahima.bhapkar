#include<stdio.h>
#include<conio.h>
void main(){
int n1,n2;
clrscr();
printf("enter the integer:");
scanf("%d%d",&n1,&n2);
if(n1>=100 && n2<=200)
{
printf("at least one of the integers in within the range 100 to 200");
}
else{
printf("neither of the integer is within the range 100");
     }
getch();
}