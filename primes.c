/*
Students Name: Rohan Pradhan
Roll No.:
Lab No:8
Subject: Programming Fundmentals
Program: palendrome
Date: 6th november

*/

#include<stdio.h>

int main()
{
int n,i,count,j;

printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
					{
			if(i%j==0)
				count++;
			}
						if(count<3)
							printf("%d is a prime number\n",i);
	
}
return 0;
}
