#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;// gcd(UCLN),lcm(BCNN) 
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    a = num1;
    b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (num1 * num2) / gcd;
    printf("The Lowest Common Multiple (LCM) of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
