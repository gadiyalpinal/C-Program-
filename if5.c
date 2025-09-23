#include <stdio.h>

int main() 
{
    float sub1, sub2, sub3;
    float total, average;

    printf("Enter marks for subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &sub3);

    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("\nStudent has failed because of low marks in one or more subjects.\n");
    } else {
        total = sub1 + sub2 + sub3;
        average = total / 3.0;

        printf("\nTotal Marks: %.2f\n", total);
        printf("Average Marks: %.2f\n", average);

        if (average >= 70) {
            printf("Grade: Distinction\n");
        } else if (average >= 60) {
            printf("Grade: First Class\n");
        } else if (average >= 50) {
            printf("Grade: Second Class\n");
        } else if (average >= 35) {
            printf("Grade: Third Class\n");
        }
    }

    return 0;
}
