#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char string[10];
char *str1="abcdefghi";
clrscr();
strncpy(string,str1,5);
string[5]='\0';
printf("%s\n",string);
getch();
}