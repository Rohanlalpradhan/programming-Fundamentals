/*
Students Name: Rohan Pradhan
Roll No.:
Lab No:5
Subject: Programming Fundmentals
Program: greatest among 3
Date: 21st october

*/

#include<stdio.h>

int main()
{
int a,b,c;

printf("Enter 3 numbers a,b&c:");
scanf("%d%d%d",&a,&b,&c);

if(a>=b&&a>=c)
	{
			printf("%d is greatest number",a);
	}

else if(b>=c&&b>=a)
	{
			printf("%d is greatest number",b);
	}
else 
			printf("%d is the greatest",c);

return 0;
}
