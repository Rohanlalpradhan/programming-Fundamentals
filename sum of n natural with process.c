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
	a=0;
do{
	printf("the %d+",sum);
	sum+=a;
		printf("%d is %d\n",a,sum);
	a++;
}while(a<=n);
printf("The sum of %d natural number is %d",n,sum);
return 0;
}
