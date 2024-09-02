#include<stdio.h>
#include<conio.h>
void main(){
int arr[6],i,mid,last,arr2[3];
clrscr();
printf("enter the array:");
for(i=0;i<6;i++){
scanf("%d",&arr[i]);
}
mid=6/2;
last=mid-1;

arr2[0]=arr[mid];
arr2[1]=arr[last];

printf("array of integer in odd:");
for(i=0;i<3;i++){
printf("%d",arr2[i]);}
getch();
}