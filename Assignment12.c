#include <stdio.h>

int main() {
    int num1, num2, i;
    int gcd = 1, scd = -1;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // 🔹 Smallest Common Divisor (other than 1)
    for(i = 2; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            scd = i;
            break;
        }
    }

    if(scd == -1)
        printf("No common divisor other than 1\n");
    else
        printf("Smallest Common Divisor = %d\n", scd);

    // 🔹 Greatest Common Divisor (GCD)
    for(i = 1; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("GCD = %d\n", gcd);

    return 0;
}
