#include <stdio.h>

// Function to calculate percentage
float calculatePercentage(float marks[], int subjects) {
    float total = 0;

    for (int i = 0; i < subjects; i++) {
        total += marks[i];
    }

    return total / subjects;
}
// Function to determine grade
char calculateGrade(float percentage) {
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}

int main() {
    char name[50];
    float marks[5];
    float percentage;
    char grade;

    printf("===== Student Grade Calculator =====\n");

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("\nEnter marks for 5 subjects:\n");

    for (int i = 0; i < 5; i++) {
        do {
            printf("Subject %d: ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 100) {
                printf("Invalid marks! Enter a value between 0 and 100.\n");
            }
        } while (marks[i] < 0 || marks[i] > 100);
    }

    percentage = calculatePercentage(marks, 5);
    grade = calculateGrade(percentage);

    printf("\n===== Result =====\n");
    printf("Student Name : %s\n", name);
    printf("Percentage   : %.2f%%\n", percentage);
    printf("Grade        : %c\n", grade);

    if (grade == 'F')
        printf("Result       : Fail\n");
    else
        printf("Result       : Pass\n");

    return 0;
}
