#include<iostream>
int main()
{
	char name[50];
	int marks,i,num;
	printf("enter the number of students");
	scanf("%d",&num);
	FILE *fptr;
	fptr=(fopen("c:\\users\\acer\\documents\\student.txt","w"));
	for(i=0;i<num;++i)
	{
		printf("for student%d\n enter name:",i+1);
		scanf("%s",name);
		printf("enter marks:\n");
		scanf("%d",&marks);
		fprintf(fptr,"\nName:%s \nmarks=%d",name,marks);
	}
	fclose(fptr);
	return 0;
}
