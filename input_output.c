#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    float avg_marks;
    char name[50];
    printf("Enter the student's name: \n");
    scanf("%s", &name);
    printf("Enter the age of student: \n");
    scanf("%d", &age);
    printf("Enter the avg_marks: \n");
    scanf("%f", &avg_marks);
    printf("The details of the student: \n");
    printf("Name:-%s\n", name);
    printf("Age:-%d\n", age);
    printf("Avg_marks:-%f\n", avg_marks);
}