#include<stdio.h>
int numberOfFaculty;
int numberOfStudent;

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

	f_t_slice=60/numberOfFaculty;
	s_t_slice=60/numberOfStudent;
	printf("\nTeacher:-----------------");
	for(i=0;i<nf;i++)
	{  
		if(t[i].ftime<f_t_slice)
		{
			time1=time1+t[i].ftime;
			printf("\nquery has been heard %s ",t[i].Tn);
			
		}
		else if(t[i].ftime=f_t_slice)
		{
			time1=time1+f_t_slice;
			printf("\nquery has been heard for %s ",t[i].Tn);
		}
		else
		{
			time1=time1+f_t_slice;
			printf("\nquery cannot be heard for so long for %s ",t[i].Tn);
			
		}
	}
}