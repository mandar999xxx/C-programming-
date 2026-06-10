/**
 * Module: Lab Programs
 * Problem: 5. Student details with average and grade
 * 
 * Description:
 * This program records student details, computes grades, calculates the average 
 * mark, and lists students who scored above and below average.
 */

#include <stdio.h>

struct student
{
    char name[50];
    int rollno;
    int marks;
    char grade;
} s[100];

int main()
{
    int n, i, sum = 0, arg;

    printf("Enter number of students\n");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid number of students. Must be between 1 and 100.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter name, rollno, marks\n");
        scanf("%49s %d %d", s[i].name, &s[i].rollno, &s[i].marks);
        sum = sum + s[i].marks;
    }

    arg = sum / n;

    for (i = 0; i < n; i++)
    {
        if (s[i].marks >= 90)
            s[i].grade = 'A';
        else if (s[i].marks >= 75)
            s[i].grade = 'B';
        else if (s[i].marks >= 60)
            s[i].grade = 'C';
        else
            s[i].grade = 'D';
    }

    printf("The average is %d\n", arg);
    printf("The student details are:\n");
    printf("Name\tRollno\tMarks\tGrade\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t%c\n", s[i].name, s[i].rollno, s[i].marks, s[i].grade);
    }

    printf("The details of student who scored above average marks\n");
    printf("Name\tRollno\tMarks\tGrade\n");
    for (i = 0; i < n; i++) {
        if (s[i].marks >= arg) {
            printf("%s\t%d\t%d\t%c\n", s[i].name, s[i].rollno, s[i].marks, s[i].grade);
        }
    }

    printf("The details of student who scored below average marks:\n");
    printf("Name\tRollno\tMarks\tGrade\n");
    for (i = 0; i < n; i++) {
        if (s[i].marks <= arg) {
            printf("%s\t%d\t%d\t%c\n", s[i].name, s[i].rollno, s[i].marks, s[i].grade);
        }
    }

    return 0;
}
