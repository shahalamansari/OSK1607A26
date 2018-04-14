#include<stdio.h>
int numberOfFaculty;
int numberOfStudent;

struct Teacher
{
    char teacher_name[10];
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
	scanf("%d",&numberOfFaculty);
	for(i=0;i<nf;i++)
	{
		printf("Enter name of Teacher%d ",(i+1));
		scanf("%s",&t[i].teacher_name);
		printf("Enter time(in mins) of query for Teacher%d ",(i+1));
		scanf("%d",&t[i].ftime);
	}
	printf("Enter no. of students ");
	scanf("%d",&numberOfStudent);
	for(i=0;i<ns;i++)
	{
		printf("Enter name of student%d ",(i+1));
		scanf("%s",&s[i].student_name);
		printf("Enter time(in mins) of query for student%d ",(i+1));
		scanf("%d",&s[i].stime);
	}

	f_t_slice=60/numberOfFaculty;
	s_t_slice=60/numberOfStudent;
	printf("\nResolving Teacher's query:-----------------");
	for(i=0;i<numberOfFaculty;i++)
	{  
		if(t[i].ftime<f_t_slice)
		{
			time1=time1+t[i].ftime;
			printf("\nYour query has been heard, Mr/Ms %s ",t[i].teacher_name);
			
		}
		else if(t[i].ftime=f_t_slice)
		{
			time1=time1+f_t_slice;
			printf("\nYour query has been heard, Mr/Ms %s ",t[i].teacher_name);
		}
		else
		{
			time1=time1+f_t_slice;
			printf("\nquery cannot be heard for so long for %s ",t[i].teacher_name);
			
		}
	}

	printf("\nResolving Student's query:-----------------");
	for(i=0;i<numberOfStudent;i++)
	{
		if(s[i].stime<s_t_slice)
		{
			time2+=s[i].stime;
			printf("\nYou query has been heard Mr/Ms %s ",s[i].student_name);
			
		}
		else if(s[i].stime=s_t_slice)
		{
			time2+=s_t_slice;
			printf("\nYou query has been heard Mr/Ms %s ",s[i].student_name);
		}
		else
		{
			time2+=s_t_slice;
			printf("\nquery cannot be heard for so long for %s ",s[i].student_name);
		}
	}

	int total=time1+time2-60;
	int avg=total/(numberOfStudent+numberOfFaculty);
	printf("\nTotal querying time = %d ",total);
	printf("\nAverage querying time = %d ",avg);
}