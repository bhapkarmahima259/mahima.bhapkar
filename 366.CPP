#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,p;
char m;
clrscr();
for(i=1;i<=7;i++){
if(i%2==0){
continue;
}

else{
p=i;
}
m=65;
for(k=1;k<=35-i;k++){
printf(" ");
}
for(j=1;j<=i;j++){
printf("%c ",m);
}
printf("\n");
}
getch();
}
