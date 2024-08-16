#include<stdio.h>
#include<conio.h>
void main(){
int principal_amount,rate_of_intrest,days,simple_intrest;
clrscr();
printf("enter the principal of amount:");
scanf("%d",&principal_amount);
printf("enter the rate of intrest:");
scanf("%d",&rate_of_intrest);
printf("enter the days:");
scanf("%d",&days);
simple_intrest=principal_amount*rate_of_intrest*days/100;
printf("%d",simple_intrest);
getch();
}