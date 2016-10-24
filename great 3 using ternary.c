/*
Students Name: Rohan Pradhan
Roll No.:
Lab No:7
Subject: Programming Fundmentals
Program: 3 largest
Date: 24th october

*/

#include<stdio.h>

int main()
{
int a,b,c,q;
r:
printf("Enter three numbers: \n");
scanf("%d%d%d",&a,&b,&c);

q=(a>b)?a:b;
(q>c)?printf("%d is large\n\n",q):printf("%d is large\n\n",c);
goto r;

return 0;
}
