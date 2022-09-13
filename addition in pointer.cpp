#include<stdio.h>
int main()
{
	int a,b,*p1,*p2,sum;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	sum=*p1+*p2;
	printf("sum of the numbers=%d\n",sum);
	return 0;
}
