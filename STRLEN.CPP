#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char name[10];
int len;
clrscr();
printf("enter the name:");
scanf("%s",name);
len=strlen(name);
printf("%d",len);
getch();
}