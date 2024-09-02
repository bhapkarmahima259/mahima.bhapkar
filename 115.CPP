#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,newarr[3],mid1,mid2,mid3;
clrscr();
printf("enter the fird array:");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);}
mid1=5/2;
mid2=mid1-1;
mid3=mid1+1;
newarr[0]=arr[mid1];
newarr[1]=arr[mid2];
newarr[2]=arr[mid3];
printf("new array:");
for(i=0;i<3;i++){
printf("%d",newarr[i]);}
getch();
}