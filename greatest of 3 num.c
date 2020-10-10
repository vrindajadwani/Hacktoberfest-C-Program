#include<stdio.h>
int main()
{
int a,b,c;
scanf("%i%i%i",&a,&b,&c);
printf("the first number(a) is %i\n",a);
printf("the second number(b) is %i\n",b);
printf("the third number is(c) %i\n",c);
if(a>b and a>c)
{
printf("a is greater than b and c ");
}
else if(b>a and b>c)
{
printf("b is greater than a and c ");
}
else
{
printf("c is greater than a and b");
}
}
