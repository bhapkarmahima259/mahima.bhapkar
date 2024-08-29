#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],length,i;
clrscr();
printf("entyer the array:");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
printf("reverse array:");
for(i=4;i>0;i--){
printf("%d",arr[i]);
}
getch();
}

