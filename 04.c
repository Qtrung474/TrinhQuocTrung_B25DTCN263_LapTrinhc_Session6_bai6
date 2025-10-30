#include <stdio.h>

int main() {
    int n;
    int i;
    do {
        printf("Enter a positive integer from 1 to 10: ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("Invalid input. Please try again.\n");
        }
    } while (n < 1 || n > 10);
    printf("\nMultiplication table for %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, (n * i));
    }
    return 0;
}
