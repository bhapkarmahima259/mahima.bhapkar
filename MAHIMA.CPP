#include<stdio.h>
#include<conio.h>
void main()
{

int i1,i2,i3;
clrscr();
printf("accept the three integer value:");
scanf("%d%d%d",&i1,&i2,&i3);

 if(i1>i2 && i1>i3) {
 printf("i1 is greater%d");
}

 if(i2>i1 && i2>i3){
 printf("i2 is greater%d");
}

 if(i3>i2 && i3>i1){
 printf("i3 is greater%d");
}
 getch();
}