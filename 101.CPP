#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],length,i;
clrscr();
printf("enter the array:");
for(i=0;i<5;i++){
scanf("%d",arr[i]);}
if(arr[0]==arr[4]){

printf("true");
}
else{
printf("false");
}
getch();
}