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
int n,rem,b,temp;
loop:
b=0;
printf("Enter a number:");
scanf("%d",&n);
temp=n;
while(n!=0)
	{
		rem=n%10;
		b=b*10+rem;
		n=n/10;
	}

if(temp==b)
		printf("The number is palendrome\n\n");
else
printf("The num is not Palendrome\n\n");
goto loop;
return 0;
}
