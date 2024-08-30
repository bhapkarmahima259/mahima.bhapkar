#include<stdio.h>
#include<conio.h>
void main()
{
int arr[2];
int i,c10=0,c20=0;
clrscr();
printf("enter the integer:");
for(i=0;i<2;i++){
scanf("%d",&arr[i]);
if(arr[i]==10) {
c10++;
} }
 if(arr[i]==20){
c20++;

}

if(c10==2||c20==2){
printf("true");
}
else{
printf("false");
}
getch();
}