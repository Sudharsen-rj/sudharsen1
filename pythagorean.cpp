#include<stdio.h>
int main()
{
	int i,p,q,r;
	printf("enter the numbers:");
	scanf("%d %d %d",&p,&q,&r);
	for(i=p;i<=q;i++)
	{
		if(i%10==r)
		{
			continue;
		}
		if(i/10==r)
		{
			continue;
		}
		{
			printf("\n%d",i);
		}
	}
}
