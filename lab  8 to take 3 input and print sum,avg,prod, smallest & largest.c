/*
Students Name: Rohan Pradhan
Roll No.:
Lab No:8
Subject: Programming Fundmentals
Program:
Date: 25th october

*/

#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,s,avg,pro;
		printf("Enter first number");
		scanf("%d",&a);
		printf("Enter second number");
		scanf("%d",&b);
		printf("Enter third number");
		scanf("%d",&c);
			s=a+b+c;
			avg=s/3;
			pro=a*b*c;
		printf("The sum = %d, average=%d, product=%d\n\n",s,avg,pro);
		
		(a>b&&a>c)?printf("%d is largest numbger\n",a):(b>c)?printf("%d is largest number\n",b):printf("%d is largest number\n",c);
		(a<b&&a<c)?printf("%d is smallest number\n",a):(b<c)?printf("%d is smallest number\n",b):printf("%d is smallest numbher\n",c);
		return 0;
	}
