#include <stdio.h>

// Function to calculate and print grade
void calculateGrade(float marks[], int count) {
    float total = 0.0, average;

    // Calculate Total
    for(int i = 0; i < count; i++) {
        total += marks[i];
    }

    // Calculate Average
    average = total / count;

    printf("\nTotal Marks: %.2f\n", total);
    printf("Average: %.2f\n", average);

    // Determine Grade based on the image criteria
    printf("Grade: ");
    if (average >= 90) {
        printf("A\n");
    } else if (average >= 80) {
        printf("B\n");
    } else if (average >= 70) {
        printf("C\n");
    } else if (average >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
}

int main() {
    float marks[5]; // Assuming 5 subjects
    int i;

    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Pass the array to the function
    calculateGrade(marks, 5);

    return 0;
}