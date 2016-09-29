/*
Student Name:Rohan Pradhan
subject: Programing Fundamentals
Roll:
Program:To print result
Lab:03
Date:29/09/2016
*/


 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     int a,b,c,d,e,f,g,total;
     float per;
     char name[15];
     printf("Enter Name of the student:\n");
     scanf("%s",name);

     printf("Enter the marks of 7 subjects:\n \n");
     printf("\tComputer architecture:\n");
     scanf("%d",&a);
     printf("\tProgramming:\n");
     scanf("%d",&b);
     printf("\tDecrete Math:\n");
     scanf("%d",&c);
     printf("\tAlgebra:\n");
     scanf("%d",&d);
     printf("\tSoftware Engineering:\n");
     scanf("%d",&e);
     printf("\tManagement:\n");
     scanf("%d",&f);
     printf("\tInteractive:\n");
     scanf("%d",&g);

    total=a+b+c+d+e+f+g;
    per=total/7;

    printf("The total marks obtained by %s is %d and the percent is %f %",name,total,per);

     getch();
 }
