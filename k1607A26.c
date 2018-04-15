#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int count = 0;

void result(int query[][2], int n,int bt[],int quantum)
{
	// Make a copy of burst times bt[] to store remaining
	// burst times.
	int rem_bt[n];
	for (int i = 0 ; i < n ; i++){
		rem_bt[i] = bt[i];
	}

	int t = 0; // Current time

	printf("\nTEACHER'S QUERIES........................................................\n");

	while(1)
	{
		//printf("\nInside While loop...\n");
		
		bool done = true;

		for (int i = 0; i < n; i++)
		{
			
			//printf("\nINSIDE FOR LOOP..\n");
			if (query[i][1]==1)
			{
				continue;
			}

			if (rem_bt[i]>0)
			{
				done = false;

				if (rem_bt[i]>quantum)
				{
					t = t + quantum;
					rem_bt[i]-=quantum;
				}

				else
				{
					
					
						if (t>=120)
		          {
			         printf("\nTime over,  Query %d , come back tomorrow...\nYour remaining time is %d\n",query[i][0],rem_bt[i]);
			         done=true;
			           break;
		           }
		           else{
		           	t = t+rem_bt[i];
					rem_bt[i] = 0;
					printf("\nTeacher Query no %d Resolved....\n",query[i][0]);
					count++;
				}
				}
			}
			
		}
		if (done==true)
		{
			break;
		}
	}


	if (t>=120)
	{
		printf("\nSorry, time to go...Come back tomorrow for unresolved queries.....\n");
		goto x;
	}

	else
	{
	
		printf("\nSTUDENTS QUERIES......................................................\n");

		while(1)
		{
		//printf("\nInside While loop...\n");
		
		bool done = true;

		for (int i = 0; i < n; i++)
		{
			
			//printf("\nINSIDE FOR LOOP..\n");
			if (query[i][1]==0)
			{
				continue;
			}

			if (rem_bt[i]>0)
			{
				done = false;

				if (rem_bt[i]>quantum)
				{
					t = t + quantum;
					rem_bt[i]-=quantum;
				}

				else
				{
					
						if (t>=120)
		          {
			         printf("\nTime over,  Query %d , come back tomorrow...\nYour remaining time is %d\n",query[i][0],rem_bt[i]);
			         done=true;
			           break;
		           }
		           else{
		           	t = t+rem_bt[i];
					rem_bt[i] = 0;
					printf("\nStudent Query no %d Resolved....\n",query[i][0]);
					count++;
				}
				}
			}
		}
		if (done==true)
		{
			break;
		}
	}
   }
   x:
    printf("\n******************************************************************************\n");
	printf("\nTotal Query time : %d\n",t);
	float f = t/count;
	printf("\nAverage Query time: %f\n",f);
	printf("\n*******************************************************************************\n");
}

int main(int argc, char const *argv[])
{
	printf("\n***********SUDESH ONLINE 120 MINUTES QUERY PORTAL***************\n");
	int time_quantum = 5;
	int n,b_t;
	char str[10];
	printf("\nEnter the number of queries: ");
	scanf("%d",&n);
	int query[n][2];
	int burst_time[n];

	for (int i = 0; i < n; ++i)
	{
		printf("\nQUERY: %d",i);
		printf("\nAre you a student of teacher?: ");
	    scanf("%s",str);
		printf("\nEnter the time required for your query in minutes: ");
		scanf("%d",&b_t);
		if (str[0]=='s' || str[0]=='S')
		{
			query[i][0] = i;
			query[i][1] = 1;
			burst_time[i]=b_t;

		}

		if (str[0]=='t' || str[0]=='T')
		{
			query[i][0] = i;
			query[i][1] = 0;
			burst_time[i]=b_t;
		}

	}


		printf("\nQUERY\tBurst Time");
		for (int i = 0; i < n; ++i)
		{
			if (query[i][1]==1)

			{
				printf("\n%d\t\t%d",query[i][0],burst_time[i]);
			}

			if (query[i][1]==0)
			{
				printf("\n%d\t\t%d",query[i][0],burst_time[i]);
			}
		}

		result(query, n, burst_time, time_quantum);
	return 0;
}