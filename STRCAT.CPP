#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char destination[25];
char *blank="",*c="c++", *turbo="Turbo";
clrscr();
strcpy(destination,turbo);
strcat(destination,c);
printf("%s\n",destination);
getch();
}