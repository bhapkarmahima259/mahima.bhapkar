#include<stdio.h>
#include<conio.h>
void main()
{
int r1,r2,r3,r4,min,max;
clrscr();
printf("print the 4 real number:");
scanf("%d%d%d%d",&r1,&r2,&r3,&r4);
if(r1>=r2 && r1>=r3 && r1>=r4)
max=r1;
else if(r2>=r1 && r2>=r3 && r2>=r4)
max=r2;
else if(r3>=r1 && r3>=r2 && r3>=r4)
max=r3;
else
 max=r4;
 if(r1<=r2 && r1<=r3 && r1<=r4)
 min=r1;
 else if(r2<=r1 && r2<=r3 && r2<=r4)
 min=r2;
 else if(r3<=r1 && r3<=r2 && r3<=r4)
 min=r3;
 else
 min=r4;
 printf("difference of value:%d",max-min);
 getch();
 }