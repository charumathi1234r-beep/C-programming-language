#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rollno;
int mark;
char city[20];
char dream[20];
};
struct student s[10];
void read()
{
int i;
for(i=0;i<10;i++)
{
printf("enter the name\n");
scanf("%s",s[i].name);
printf("enter the rollno\n");
scanf("%d",&s[i].rollno);
printf("enter the mark\n");
scanf("%d",&s[i].mark);
printf("enter the city\n");
scanf("%s",s[i].city);
printf("enter the dream\n");
scanf("%s",s[i].dream);
}
}
void display()
{
int i;
printf("------STUDENT DETAILS------");
for(i=0;i<10;i++)
{
printf("\nstudent %d\n",i+1);
printf("\nstudent name %s\n",s[i].name);
printf("\nstudent rollno %d\n",s[i].rollno);
printf("\nstudent mark %d\n",s[i].mark);
printf("\nstudent city %s\n",s[i].city);
printf("\nstudent dream %s\n",s[i].dream);
}
}
int main()
{
read();
display();
return 0;
