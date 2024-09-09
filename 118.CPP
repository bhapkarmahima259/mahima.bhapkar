#include<stdio.h>
#include<conio.h>
void main(){
int n,arr[n],i,count;
clrscr();
printf("enter the number:");
scanf("%d",&n);
printf("enter the elements of the array:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
if(arr[i]%2==0){
count++;}
printf("the number of even number in the array:%d",count);
getch();
}