#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<bits/stdc++.h>
int main(int argc,char *argv[])
{
	if(argc==2)
	{

		if(strcmp(argv[1],"1")==0)
		{

			FILE *fp;
			char s[80];
			fp=fopen("Nikhil.txt","a+");
			if(fp==NULL)
			{
				puts("unable to open file");
				exit(1);
			}
			printf("Enter your name \n");
			gets(s);
			fputs(s,fp);
			fputs("\n",fp);
			fclose(fp);
		}
		if(strcmp(argv[1],"2")==0)
		{
			FILE *fp;
			char s[80];
			fp=fopen("Rahul.txt","a+");
			if(fp==NULL)
			{
				puts("unable to open file");
				exit(1);
			}
			printf("Enter your name \n");
			gets(s);
			fputs(s,fp);
			fputs("\n",fp);
			fclose(fp);
		}
		if(strcmp(argv[1],"3")==0)
		{
			FILE *fp;
			char s[80];
			fp=fopen("Shubham.txt","a+");
			if(fp==NULL)
			{
				puts("unable to open file");
				exit(1);
			}
			printf("Enter your name \n");
			gets(s);
			fputs(s,fp);
			fputs("\n",fp);
			fclose(fp);
		}
		if(strcmp(argv[1],"4")==0)
		{
			FILE *fp;
			char s[80];
			fp=fopen("Himakshi.txt","a+");
			if(fp==NULL)
			{
				puts("unable to open file");
				exit(1);
			}
			printf("Enter your name \n");
			gets(s);
			fputs(s,fp);
			fputs("\n",fp);
			fclose(fp);
		}
		if(strcmp(argv[1],"5")==0)
		{
			int i;
			i=execlp("/usr/bin/wc","counting","-l","Nikhil.txt","Rahul.txt","Shubham.txt","Himakshi.txt",NULL);
			if(i==-1)
				printf("error occured in execlp \n");
		}
	}
	return 0;
}
