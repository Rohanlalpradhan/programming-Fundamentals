/*
Students Name: Rohan Pradhan
Roll No.:
Lab No:5
Subject: Programming Fundmentals
Program: calculatar
Date: 21st october

*/

#include<stdio.h>

int main()
{
int a,b;
int x;
	loop:
printf("------------Simple Calculator-------------\n");
printf("             *****MENU*****\n");
printf("Enter '1' for addition\n");
printf("Enter '2' for substraction\n");
printf("Enter '3' for division\n");
printf("Enter '4' for multipication\n");
printf("****************************************\n");
printf("Number:");
scanf("%d",&x);

printf("Enter two numbers:");
scanf("%d%d",&a,&b);


switch(x)
	{
			case 1:
						printf("The sum of %d and %d is %d\n",a,b,a+b);
						break;
			
			case 2:
						printf("The differecne of %d and %d is %d\n",a,b,a-b);
						break;
			case 3:
						
						printf("The division of %d and %d is %d\n",a,b,a/b);
						break;
			case 4:						
						printf("The product of %d and %d is %d\n",a,b,a*b);
						break;
			
			default:
					printf("Error");
}
printf("\n\n");
goto loop; 
return 0;
}
