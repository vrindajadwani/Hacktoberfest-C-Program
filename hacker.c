#include<stdio.h>
int main()
{
	int a,c,b;
	a=2,b=4;
	printf("before swap\na= %d,b= %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swap\na= %d,b= %d",a,b);
}
