#include <stdio.h>

int main() {
    int choice, n, i;
    float x, y, result = 1;
    long fact = 1;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            printf("Result = %.2f\n", x + y);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            printf("Result = %.2f\n", x - y);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            printf("Result = %.2f\n", x * y);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            if (y != 0)
                printf("Result = %.2f\n", x / y);
            else
                printf("Division by zero not allowed\n");
            break;

        case 5:
            printf("Enter base and power: ");
            scanf("%f %f", &x, &y);
            for (i = 1; i <= y; i++)
                result = result * x;
            printf("Result = %.2f\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            for (i = 1; i <= n; i++)
                fact = fact * i;
            printf("Factorial = %ld\n", fact);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}#include <stdio.h>

int main() {
    int choice, n, i;
    float x, y, result = 1;
    long fact = 1;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            printf("Result = %.2f\n", x + y);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            printf("Result = %.2f\n", x - y);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            printf("Result = %.2f\n", x * y);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            if (y != 0)
                printf("Result = %.2f\n", x / y);
            else
                printf("Division by zero not allowed\n");
            break;

        case 5:
            printf("Enter base and power: ");
            scanf("%f %f", &x, &y);
            for (i = 1; i <= y; i++)
                result = result * x;
            printf("Result = %.2f\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            for (i = 1; i <= n; i++)
                fact = fact * i;
            printf("Factorial = %ld\n", fact);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
