#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>
int main()
{
	int n;
	printf("Enter the no. of voters \n");
	scanf("%d",&n);
	printf("Press 1. Nikhil Mishra \n");
	printf("Press 2. Rahul Singh \n");
	printf("Press 3. Shubham Singh \n");
	printf("Press 4. Himakshi \n");
	printf("Press 5. Counting \n");
	printf("Enter the candidate id \n");
	for(int i=0;i<n;i++)
	{
		
		int i;
		/*	printf("Press 1. Nikhil Mishra \n");
			printf("Press 1. Rahul Singh \n");
			printf("Press 1. Shubham Singh \n");
			printf("Press 1. Himakshi \n");
			printf("Press 5. Counting \n");
			printf("Enter the candidate id \n");*/
		scanf("%d",&i);
		char s[100];
		sprintf(s,"%d",i);
		int pid=fork();
		if(pid==0)
		{
			int x;
			x=execlp("/home/jarvis/votinghandler","Voting_Handler",s,NULL);
			if(x==-1)
				printf("error occured in execlp \n");
		}
	 else if(pid>0)
		{
			int status;
			wait(&status);
		}
	}
}
