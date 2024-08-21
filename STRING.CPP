#include<stdio.h>
#include<conio.h>
void main()
{
char s1[6],i;
clrscr();
printf("enter the name");
scanf("%s",s1);
for(i=0;s1[i]!='\0';i++)
{
printf("%c",s1[i]);
}
getch();
}