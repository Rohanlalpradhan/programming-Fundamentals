/*
Students Name: Rohan Pradhan
Roll No.:
Lab No:8
Subject: Programming Fundmentals
Program: sum of n natural number
Date: 24th october

*/

#include<stdio.h>

int main()
{
int n,a,sum=0;
	printf("Enter a numbers: \n");
	scanf("%d",&n);
	a=n;
do{
	sum+=a;
	
	a--;
}while(a>0);
printf("The sum of %d natural number is %d",n,sum);
return 0;
}
