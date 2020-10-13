#include<stdio.h>
#include<conio.h>
void main()
{
int sub1,sub2,sub3,sub4,sub5,sum,percentage;
printf("Enter the marks of 1st subject=");
scanf("%d",&sub1);
printf("Enter the marks of 2nd subject=");
scanf("%d",&sub2);
printf("Enter the marks of 3rd subject=");
scanf("%d",&sub3);
printf("Enter the marks of 4th subject=");
scanf("%d",&sub4);
printf("Enter the marks of 5th subject=");
scanf("%d",&sub5);
sum=sub1+sub2+sub3+sub4+sub5;
percentage=(sum*100)/500;
if(percentage>40)
{printf("student is pass and the percentage is=%d",percentage);
}
else
{printf("student is fail and the percentage is= %d",percentage);
}
getch();
}
