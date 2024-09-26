#include<stdio.h>
#include<conio.h>
void main()
{
int h,sp,v;
clrscr();
for(h=7;h>=1;h--){
if(h%2==0){
continue;
}
for(sp=1;sp<=35-h;sp++){
printf(" ");
}
for(v=1;v<=h;v++){
printf("* ");
}
printf("\n");
}
getch();
}
