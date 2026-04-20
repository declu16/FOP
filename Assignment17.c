#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int i;
    int fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate power
float power(float x, int n) {
    int i;
    float result = 1;
    for(i = 1; i <= n; i++) {
        result = result * x;
    }
    return result;
}

int main() {
    int n, i, sign = 1;
    float x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int power_val = 2*i - 1;
        sum = sum + sign * (power(x, power_val) / factorial(power_val));
        sign = -sign; // alternate sign
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}
