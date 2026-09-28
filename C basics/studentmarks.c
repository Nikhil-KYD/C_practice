#include <stdio.h>
int main() 
{
    char name[60];
    char gender;
    int rollno;
    float marks1, marks2, marks3, totalMarks, percentage;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter your roll number: ");
    scanf("%d",&rollno);
    printf("Enter marks for subjects 1: \n");
    scanf("%f",&marks1);
    printf("Enter marks for subject 2: \n");
    scanf("%f",&marks2);
    printf("Enter marks for subject 3: \n");
    scanf("%f",&marks3);
    printf("Enter your grade: \n");
    scanf(" %c", &grade);
    totalMarks = marks1 + marks2 + marks3;
    percentage = (totalMarks / 300) * 100;

    printf("\nStudent Details: \n");
    printf("Name: %s\n", name);
    printf("Gender: %c\n", gender);
    printf("Roll Number: %d\n", rollno);
    printf("Marks in Subject 1: %.2f\n", marks1);
    printf("Marks in Subject 2: %.2f\n", marks2);
    printf("Marks in Subject 3: %.2f\n", marks3);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("Thanks for providing your details!\n");
    return 0;

}