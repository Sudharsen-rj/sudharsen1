#include<stdio.h>
int addtwonumbers(int*x,int*y);
int main()
{
	int fno,sno,sum;
	int *n1,*n2;
	printf("enter the first number");
	scanf("%d",fno);
	printf("enter the second number");
	scanf("%d",sno);
	sum=addtwonumbers(&fno,&sno);
	printf("sum of first and second number is %d",fno,sno,sum);
	return 0;
}
int addtwonumbers(int*n1,int*n2)
{
	int sum;
	sum=*n1+*n2;
	return sum;
}
