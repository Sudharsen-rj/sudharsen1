#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,per;
    printf("enter the marks obtained in four subjects");
    scanf("%d %d %d",&sub1,&sub2,&sub3,&sub4);
    per=(sub1+sub2+sub3+sub4)/4.0;
    if(per>=75)
    {
    	printf("grade:distinction");
	}
	else if(per 60>=&<75)
	{
		printf("grade:first division");
	}
	else if(per 50>=&<60)
	{
		printf("grade:second division");
	}
	else if(per 40>=&<50)
	{
		printf("grade:third division");
	}
	else
	{
		printf("grade:fail");
	}
	return 0;
}
