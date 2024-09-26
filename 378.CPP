#include<stdio.h>
#include<conio.h>
void main(){
int h,sp,v;
int ch=65,ch2;
clrscr();
for(h=1;h<=7;h++){
if(h%2!=1)
continue;

for(sp=1;sp<=35-h;sp++){
printf(" ");}
ch2=ch;
for(v=1;v<=h;v++){
if(ch2=='A'){
printf(" %c",ch2);
ch2++;
}
else{
printf(" %c",ch2);
ch2--;}
}
ch++;
printf("\n");
}
getch();
}