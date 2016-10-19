#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter first value:");
scanf("%d",&a);
printf("Enter secound number:");
scanf("%d",&b);

printf("The numbers before swap: \n first:%d \n secound:%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nThe numbers after after swap are \n first=%d Secound =%d",a,b);
return 0;
}
