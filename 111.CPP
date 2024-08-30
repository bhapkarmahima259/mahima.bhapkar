#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[3],arr2[3],i,sum1=0,sum2=0;
clrscr();
printf("enter the first array:");
for(i=0;i<3;i++){
scanf("%d",&arr1[i]);
sum1=sum1+arr1[i];
}
printf("enter the second array:");
for(i=0;i<3;i++){
scanf("%d",&arr2[i]);
sum2=sum2+arr2[i];
}
if(sum1<sum2){
printf("sum of array two is larger"); }
else if(sum1>sum2){
printf("sum of array one is large");}

else{
printf("both are equal");}
getch();
}
