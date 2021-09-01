#include<stdio.h>
void main()
{
struct student
{
int rollno;
char name[20];
char sec[3];
char dept[20];
int totalmarks;
}
student1,student2;
printf("Enter the name of student 1 and student 2\n");
scanf("%s%s",student1.name,student2.name);
printf("Enter the roll number of student 1 and student 2\n");
scanf("%d%d",&student1.rollno,&student2.rollno);
printf("Enter section of student 1 and student 2\n");
scanf("%s%s",student1.sec,student2.sec);
printf("Enter the department of student 1 and student 2\n");
scanf("%s%s",student1.dept,student2.dept);
printf("Enter the total marks of student 1 and student 2\n");
scanf("%d%d",&student1.totalmarks,&student2.totalmarks);
printf("********STUDENT 1 DETAILS********\n");
printf("Name = %s\n",student1.name);
printf("Roll no = %d\n",student1.rollno);

printf("Section = %s\n",student1.sec);
printf("Department = %s\n",student1.dept);
printf("Total marks = %d\n",student1.totalmarks);
printf("********STUDENT 2 DETAILS********\n");
printf("Name = %s\n",student2.name);
printf("Roll no = %d\n",student2.rollno);
printf("Section = %s\n",student2.sec);
printf("Department = %s\n",student2.dept);
printf("Total marks = %d\n",student2.totalmarks);
if(student1.totalmarks>student2.totalmarks)
{
printf("\nStudent 1 got highest marks\n");
}
else
{
printf("\nStudent 2 got highest marks\n");
}
}
