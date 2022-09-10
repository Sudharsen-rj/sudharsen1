#include<stdio.h>
int main()
{
	int n,m,i;
	printf("enter the n and m value");
	scanf("%d,&n");
	scanf("%d",&m);
	for(i=0;i<=m;i++)
	{
		printf("%d*%d=%d\n",i,n,i*n);
	}
	return 0;
}
