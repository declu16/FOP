//without recursion

#include <stdio.h>

int factorial_iterative(int n) {
    int fact = 1, i;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}


//With Recursion 

int factorial_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}
