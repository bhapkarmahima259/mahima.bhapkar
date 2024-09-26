#include<stdio.h>
#include<conio.h>
void main()
{
int h,sp,v,m=0,n;
clrscr();
for(h=1;h<=7;h++)
{
if(h%2==0){
continue;
}
n=m;
for(sp=1;sp<=35-h;sp++)
{
printf(" ");
}
for(v=1;v<=h;v++){
if(n==0){
printf("%d ",n);
n++;
}
else{
printf("%d ",n);
n--;
}
 }
m++;
printf("\n");
}
getch();
}