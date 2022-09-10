#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,num,sum=0;
	printf("enter the number to check perfect number\n");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==num)
	{
		printf("\n %d is perfect number",num);
	}
	else
	{
		printf("\n %d is not a perfect number",num);
	}
return 0;
}
