#include <stdio.h>
#include <math.h>

int main() {
    int n, choice, i, isPrime;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Square Root\n");
        printf("2. Square\n");
        printf("3. Cube\n");
        printf("4. Check Prime\n");
        printf("5. Factorial\n");
        printf("6. Prime Factors\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (n >= 0)
                    printf("Square Root = %.2f\n", sqrt(n));
                else
                    printf("Square root not defined for negative numbers\n");
                break;

            case 2:
                printf("Square = %d\n", n * n);
                break;

            case 3:
                printf("Cube = %d\n", n * n * n);
                break;

            case 4:
                isPrime = 1;
                if (n <= 1)
                    isPrime = 0;
                else {
                    for (i = 2; i <= n / 2; i++) {
                        if (n % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime)
                    printf("Number is Prime\n");
                else
                    printf("Number is Not Prime\n");
                break;

            case 5:
                if (n < 0) {
                    printf("Factorial not defined for negative numbers\n");
                } else {
                    fact = 1;
                    for (i = 1; i <= n; i++)
                        fact *= i;
                    printf("Factorial = %lld\n", fact);
                }
                break;

            case 6:
                printf("Prime Factors: ");
                for (i = 2; i <= n; i++) {
                    while (n % i == 0) {
                        printf("%d ", i);
                        n = n / i;
                    }
                }
                printf("\n");
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 7);

    return 0;
}
