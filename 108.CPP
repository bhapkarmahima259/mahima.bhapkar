#include<stdio.h>
#include<conio.h>
void main(){
int i,arr[2],contain=0;
clrscr();
printf("enter the array:");
for(i=0;i<2;i++){
scanf("%d",&arr[i]); }
if(arr[i]==15||arr[i]==20){
contain=1;}
if(contain==1){
printf("array contain");
}
else{
printf("array not contain");}
getch();
}
