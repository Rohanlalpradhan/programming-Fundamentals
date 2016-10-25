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

int main()
	{
		int n,a,r,z;
		float nfact,rfact,nrfact;
		m:
			printf("Enter the power of (a+b):");
			scanf("%d",&n);
			
			printf("a^%d",n);
		for(r=1;r<n;r++)
			{
				nfact=1;
				rfact=1;
				nrfact=1;
				for(a=n;a>0;a--)
					{
						nfact*=a;
						
					}
					for(a=r;a>0;a--)
					{
						rfact*=a;
						
					}
					for(a=(n-r);a>0;a--)
					{
						nrfact*=a;
						
					}
					z=nfact/(rfact*nrfact);
					
				printf("+%da^%db^%d",z,n-r,r);
				
			}
			printf("+b^%d\n\n",n);
			goto m;
			
	}
