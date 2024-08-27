#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average;
    char grade;

    // Input marks for 5 subjects
    printf("Enter the marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];  // Sum the marks
    }

    // Calculate average
    average = total / 5.0;

    // Determine grade based on average
    if (average >= 90) 
    {
        grade = 'E';  // 'E' for Excellent
    } 
    else if (average >= 80) 
    {
        grade = 'A';
    } 
    else if (average >= 70) 
    {
        grade = 'B';
    } 
    else if (average >= 60) 
    {
        grade = 'C';
    } 
    else 
    {
        grade = 'F';  // 'F' for Fail
    }

    // Output the total marks, average, and grade
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
