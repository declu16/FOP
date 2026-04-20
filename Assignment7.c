
#include <stdio.h>

// Define structure
struct Student {
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float total, avg;
    char grade;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input details
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);

        // Calculate total and average
        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].avg = s[i].total / 3;

        // Assign grade
        if(s[i].avg >= 75)
            s[i].grade = 'A';
        else if(s[i].avg >= 60)
            s[i].grade = 'B';
        else if(s[i].avg >= 50)
            s[i].grade = 'C';
        else
            s[i].grade = 'F';
    }

    // Display result
    printf("\n\n--- Student Results ---\n");

    for(int i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nAverage: %.2f", s[i].avg);
        printf("\nGrade: %c\n", s[i].grade);
    }

    return 0;
}
