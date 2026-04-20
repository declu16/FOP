#include <stdio.h>
#include <string.h>

// Define structure
struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];
    float salary;
};

// Function to count male and female employees
void countGender(struct EMPLOYEE e[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(strcmp(e[i].gender, "Male") == 0)
            male++;
        else if(strcmp(e[i].gender, "Female") == 0)
            female++;
    }

    printf("\nMale Employees: %d", male);
    printf("\nFemale Employees: %d\n", female);
}

// Function to display employees with salary > 10000
void highSalary(struct EMPLOYEE e[], int n) {
    printf("\nEmployees with Salary > 10000:\n");

    for(int i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s | %s | %.2f\n", e[i].name, e[i].designation, e[i].salary);
        }
    }
}

// Function to display Asst Manager employees
void asstManager(struct EMPLOYEE e[], int n) {
    printf("\nEmployees with Designation 'Asst Manager':\n");

    for(int i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0) {
            printf("%s | %s\n", e[i].name, e[i].designation);
        }
    }
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE e[n];

    // Input details
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (Male/Female): ");
        scanf("%s", e[i].gender);

        printf("Date of Joining: ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Total employees
    printf("\nTotal Employees: %d\n", n);

    // Function calls
    countGender(e, n);
    highSalary(e, n);
    asstManager(e, n);

    return 0;
}
