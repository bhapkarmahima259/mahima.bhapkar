#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m,k;
char p;
clrscr();
for(i=1;i<=4;i++){
p='A';	k=i+64;
for(m=1;m<=35-i;m++)
{
printf(" ");
}
for(j=i;j>1;j--)
{
printf("%c",p);
p++;
}
for(j=1;j<=i;j++)
{
printf("%c",k);
k--;
}
printf("\n");
}
getch();
}
