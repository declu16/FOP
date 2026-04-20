#include <stdio.h>

int main() {
    int num, remainder, reverse = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse logic
    while(num != 0) {
        remainder = num % 10;          // get last digit
        reverse = reverse * 10 + remainder; // build reversed number
        num = num / 10;               // remove last digit
    }

    // Output
    printf("Reversed number = %d\n", reverse);

    return 0;
}
