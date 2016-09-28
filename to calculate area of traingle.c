/*
Student Name:Saugat karki
subject: Programing Fundamentals
Roll:
Program:To find out area of traingle
Lab:03
Date:27/09/2016
*/


 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
     int a,b,c;
     float s,area;
     printf("***Area of Traiangle using Side***");
     printf("Enter all sides of traiangle a,b&c\n");
     scanf("%d%d%d",&a,&b,&c);
     s=(a+b+c)/2;
     printf("S = %f",s);
     area=sqrt((s*(s-a)*(s-b)*(s-c)));
     printf("The area of the traingle reading its sides is %f",area);
     getch();
 }
