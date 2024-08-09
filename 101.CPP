#include<stdio.h>
#include<conio.h>
void main()
{
int m,n;
clrscr();
for(m=1;m<=4;m++)
{
for(n=1;n<=m;n++)
{
if(n%2==0)
{
printf("0");
}
else
{
printf("1");
}
}
printf("\n");

}
getch();
}