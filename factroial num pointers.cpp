#include <stdio.h>
int findFactorial(int no)
{
	if (no == 2)
	{
		return no;
	}
	return no * findFactorial(no - 1);
}
int main()
{
	int *ptr;
	int no;
	printf("Enter a number to find factorial : " ); 
	scanf("%d",&no);
	ptr = &no;
	scanf("%d",findFactorial(*ptr));
}

