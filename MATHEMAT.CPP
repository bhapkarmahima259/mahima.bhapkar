#include<stdio.h>
#include<conio.h>
void main(){
int marks;
int count=0;
int sum=0;
float avg;
clrscr();
printf("enter the marks of stud enter 0 or a negative marks of stu:\n");
while(1)
{
printf("enters mark:");
scanf("%d",&marks);
if(marks<=0){
break;
}
sum=sum+marks;
count++;
}
if(count>0)
{
avg=sum/count;
printf("total marks:",sum);
printf("average marks",avg);
}
else{
printf("no valid marks entered:");
}
getch();
}