#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char *string="abcdefghijklmnopqrstuvwxyz",*ptr;
clrscr();
ptr=strupr(string);
printf("%s\n",ptr);
getch();
}