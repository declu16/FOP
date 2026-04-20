#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, remainder, i = 0;

    // Input
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Conversion
    while(binary != 0) {
        remainder = binary % 10;                 // get last digit
        decimal = decimal + remainder * pow(2, i); // convert and add
        binary = binary / 10;                   // remove last digit
        i++;
    }

    // Output
    printf("Decimal number = %d\n", decimal);

    return 0;
}
