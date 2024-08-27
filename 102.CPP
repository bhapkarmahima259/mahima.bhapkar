#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[4],arr2[4],i,j;
clrscr();
printf("enter the first array:");
for(i=0;i<4;i++){
scanf("%d",&arr1[i]);
}
printf("enter the second array:");
for(j=0;j<4;j++){
scanf("%d",&arr2);}
if(arr1[0]==arr1[3]||arr2[0]==arr2[3]){
arr1==arr2;
printf("true");
}
else{
printf("false");
}
getch();
}