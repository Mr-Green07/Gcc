#include <stdio.h>

int main() {
    int subjectCount = 5;
    int maxMarksPerSubject = 100;
    int marks[subjectCount];
    int totalMarks = 0;

    // Taking input for marks in each subject
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter marks obtained in each subject (out of 100):\n");

    for (int i = 0; i < subjectCount; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validate input marks to be within the valid range (0 to 100)
        if (marks[i] < 0 || marks[i] > maxMarksPerSubject) {
            printf("Invalid marks entered. Marks should be between 0 and 100.\n");
            return 1; // Exit with an error code
        }

        totalMarks += marks[i];
    }

    // Calculate the percentage
    float percentage = (float)totalMarks / (subjectCount * maxMarksPerSubject) * 100;

    // Print the aggregate marks and percentage
    printf("Aggregate marks: %d out of %d\n", totalMarks, subjectCount * maxMarksPerSubject);
    printf("Percentage marks obtained: %.2f%%\n", percentage);

    return 0;
}

