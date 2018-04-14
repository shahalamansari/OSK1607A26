#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

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
}