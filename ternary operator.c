/*
Students Name: Rohan Pradhan
Roll No.:
Lab No:7
Subject: Programming Fundmentals
Program: ternary operators
Date: 24th october

*/

#include<stdio.h>

int main()
{
int a,b;
printf("Enter two numbers: \n");
scanf("%d%d",&a,&b);

(a>b)?printf("%d is large and %d is small",a,b):printf("%d is large and %d is small",b,a);


return 0;
}
