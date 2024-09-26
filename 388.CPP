#include<stdio.h>
#include<conio.h>
void main()
{
int h,sp,v,k;
char p;
clrscr();
for(h=1;h<=4;h++){
p='A';k=h+64;

for(sp=1;sp<=4-h;sp++){
printf(" ");

}
for(v=h;v>1;v--){
printf("%c",p);
p++;
}
for(v=1;v<=h;v++){
printf("%c",k);
k--;
}
printf("\n");

}
getch();
}
