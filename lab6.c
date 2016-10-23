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
char x;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);

printf("*****MENU*****\n");
printf("Enter '+' for addition\n");
printf("Enter '-' for substraction\n");
printf("Enter '/' for division\n");
printf("Enter '*' for multipication\n");
printf("Enter '%%' for modulos\n");
scanf("%c",&x);
switch(x)
	{	
			case '+':
						
						printf("The sum of %d and %d is %d",a,b,a+b);
						break;
			
			case '-':
						printf("The differecne of %d and %d is %d",a,b,a-b);
						break;
			case '/':
						
						printf("The division of %d and %d is %d",a,b,a/b);
						break;
			case '*':
						
						printf("The product of %d and %d is %d",a,b,a*b);
						break;
			/*case '%':
						printf("The modulous of %d and %d is %d",a,b,a%b);
						break; */
			default:
					printf("Error");
}
return 0;
}
