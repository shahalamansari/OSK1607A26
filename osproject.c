#include<stdio.h>
int nf;
int ns;

struct Teacher
{
    char Tn[10];
    int ftime;
}t[10];
struct Student
{
	char student_name[10];
	int stime;
}s[10];

void main()
{   
    int i,f_t_slice,s_t_slice,time1=0,time2=60;
	printf("Enter no. of Teacher ");
	scanf("%d",&nf);
	for(i=0;i<nf;i++)
	{
		printf("Enter name of Teacher%d ",(i+1));
		scanf("%s",&t[i].Tn);
		printf("Enter time(in mins) of query for Teacher%d ",(i+1));
		scanf("%d",&t[i].ftime);
	}
	printf("Enter no. of students ");
	scanf("%d",&ns);
	for(i=0;i<ns;i++)
	{
		printf("Enter name of student%d ",(i+1));
		scanf("%s",&s[i].student_name);
		printf("Enter time(in mins) of query for student%d ",(i+1));
		scanf("%d",&s[i].stime);
	}
}