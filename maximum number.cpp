#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	*p1=a;
	*p2=b;
	if(*p1>*p2)
	{
		printf("the maximum number is=%d\n",*p1);
	}
	else
	{
		printf("the maximum number is=%d\n",*p2);
	}
	return 0;
}
