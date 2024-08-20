#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char *forward="string";
clrscr();
printf("before strrev:%s\n",forward);
strrev(forward);
printf("after strrev:%s\n",forward);
getch();
}