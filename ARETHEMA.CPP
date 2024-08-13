#include<stdio.h>
#include<conio.h>
void main(){
int choice,num1,num2,res;
clrscr();
printf("enter the 1 for addition\n");
printf("enter the 2 for substraction\n");
printf("enter the 3 for division\n");
printf("enter the 4 for multiplication\n");
printf("enter your choice:");
scanf("%d",&choice);
if(choice==1)
{
printf("enter the  number:");
scanf("%d%d",&num1,&num2);
res=num1+num2;
printf("addition%d",res);
}
else if(choice==2)
{
printf("enter the  number:");
scanf("%d%d",&num1,&num2);
res=num1-num2;
printf("substraction%d",res);
}
else if(choice==3)
{
printf("enter the two number:");
scanf("%d%d",&num1,&num2);
res=num1/num2;
printf("division%d",res);
}
else if(choice==4)
{
printf("enter the two number:");
scanf("%d%d",&num1,num2);
res=num1*num2;
printf("multiplication%d",res);
}
else
{
printf("invalide choice");

}
getch();
}