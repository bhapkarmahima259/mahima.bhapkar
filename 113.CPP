#include<stdio.h>
#include<conio.h>
void main(){
int arr1[3],arr2[3],i,arr3[6],k=0;
clrscr();
printf("enter the first array:");
for(i=0;i<3;i++){
scanf("%d",&arr1[i]);
arr3[k]=arr1[i];
k++;
}
printf("enter the second array:");
for(i=0;i<3;i++){
scanf("%d",&arr2[i]);
arr3[k]=arr2[i];
k++;
}
for(k=0;k<6;k++){
printf("%d",arr3[k]);
}
getch();
}