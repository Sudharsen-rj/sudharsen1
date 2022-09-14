#include <stdio.h>
#include <string.h>
int main()
{
    int rl,m1,m2,m3,total;
    float per;
    char nm[20];
    printf("Input the Roll Number of the student :");
    scanf("%d",&rl);
    printf("Input the Name of the Student :");
    scanf("%s",nm);
    printf("Input  the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d%d%d",&m1,&m2,&m3);
    total = m1+m2+m3;
    per = total/3.0;
    printf("\nRoll No : %d\nName of Student : %s\n",rl,nm);
    printf("Marks in m1 : %d\nMarks in m2 : %d\nMarks in m3 : %d\n",m1,m2,m3);
    printf("Total Marks = %d\nPercentage = %5.2f\n",total,per);
    return 0;
}
