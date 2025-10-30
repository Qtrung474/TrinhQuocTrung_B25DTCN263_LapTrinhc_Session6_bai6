#include <stdio.h>

int main() {
    int num, temp, divisor, digit; // divisor( chu so ), digit ( so chia ) 
    printf("Enter any integer: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    if (num < 0) {
        printf("- ");
        num = -num;
    }
    divisor = 1;
    temp = num;
    while (temp >= 10) {
        divisor = divisor * 10;
        temp = temp / 10;
    }
    temp = num;
    while (divisor > 0) {
        digit = temp / divisor;
        printf("%d ", digit);
        temp = temp % divisor;
        divisor = divisor / 10;
    }
    printf("\n");
    return 0;
}
