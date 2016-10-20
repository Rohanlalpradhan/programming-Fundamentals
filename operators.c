/*
Name Rohan Pradhan
Roll NO:
Lab no:3
Program: Assigment Operators
Date:20th oct
*/

#include<stdio.h>
 int main()
 {
	int a,b,s;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter secound number:");
	scanf("%d",&b);
	s=a;
	
	
	
	printf("The Addition(+) of %d+=%d is:%d\n",s,b,a+=b);
	a=s;
	printf("The Difference(-) of %d-=%d is:%d\n",s,b,a-=b);
	a=s;
	printf("The Product(*) of %d*=%d is:%d\n",s,b,a*=b);
	a=s;
	printf("The Division(/) of %d/=%d is:%d\n",s,b,a/=b);
	a=s;
	printf("The modulos(%%) of  %d%%=%d is:%d\n",s,b,a%=b);
	return 0;
 
 
 }
