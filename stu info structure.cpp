#include<stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;
}s;
int main(){
	int sum;
{
	printf("enter information:\n");
	scanf("%d",&num);
	printf("enter name:");
	fgets(s.name,sizeof(s.name),stdin);
	printf("enter roll number:");
	scanf("%d",&s.roll);
	printf("enter marks:");
	scanf("%f",&s.marks);
	printf("displaying information:\n");
	printf("name:");
	printf("%s",&s.name);
	printf("roll number:%d\n",s.roll);
	printf("marks:%.lf\n",s.marks);
	return 0;
}
