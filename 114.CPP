#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3],newarr[3],i;
clrscr();
printf("enter the array:");
for(i=0;i<3;i++){
scanf("%d",&arr[i]);
}
if(3>1){
arr[i]=arr[3-1];
}
printf("array after swapping first and last element:");
for(i=0;i<3;i++){
printf("%d",arr[i]);
}
getch();
}