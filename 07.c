#include <stdio.h>

int main() {
    int num1, num2, i, min, gcd;// gcd (UCLN) 

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2) {
        min = num1;
    } else {
        min = num2;
    }
    gcd = 1;
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    printf("The Greatest Common Divisor (GCD) of %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}
