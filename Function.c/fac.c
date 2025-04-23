#include <stdio.h>
int factorial() {
     int n,fact = 1, i;
     printf("enter the no:");
     scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;
    int fact = factorial(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;
}