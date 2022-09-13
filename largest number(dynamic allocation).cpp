#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	float *p;
	printf("enter the total number of elements");
	scanf("%d",&n);
	p=(float*)calloc(n,sizeof(float));
	if(p==NULL)
	{
		printf("memory is not allocated");
		exit(0);
	}
	for(int i=0;i<n;i++)
	{
		printf("enter the number %d :",i+1);
		scanf("%f",p+i);
	}
	for(int i=1;i<n;++i)
	{
		if(*p<*(p+i))
		{
		*p=*(p+i);	
		}
	}
	printf("largest number =%f",*p);
	free(p);
	return 0;
}
