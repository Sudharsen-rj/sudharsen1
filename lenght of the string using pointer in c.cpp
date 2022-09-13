#include<stdio.h>
int main()
{
	char str[100],*pt;
	int i=0;
	printf("enter the given string\n");
	gets(str);
	pt=str;
	while(*pt!=0){
		i++;
		pt++;
	}
	printf("lenght of the string %d",i);
	return 0;
}
