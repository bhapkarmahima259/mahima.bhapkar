#include<stdio.h>
#include<conio.h>
void main(){
int i,arr[2],c=0;
clrscr();
printf("enter the array:");
for(i=0;i<2;i++){
scanf("%d",&arr[i]);
}
if(arr[i]==15||arr[i]==20){
c=1;

}
 if(c==1){
printf("array  contain");

}
else{
printf("array not contain");   }

getch();
}