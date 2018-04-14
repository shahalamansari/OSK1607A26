#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

void result(int query[][2], int n,int bt[],int quantum)
{
	// Make a copy of burst times bt[] to store remaining
	// burst times.
	int rem_bt[n];
	for (int i = 0 ; i < n ; i++){
		rem_bt[i] = bt[i];
	}

	int t = 0; // Current time
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