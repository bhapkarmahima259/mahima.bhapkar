#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
clrscr();
char*string="borland internationl";
printf("string prior to strlwr:%s\n",string);
strlwr(string);
printf("string after strlwr:%s\n",string);
getch();
}