#include <stdio.h>

int main() {
    double num1, num2;
    int choice;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    do {
        printf("\n--- Menu ---\n");
        printf("1. Sum of 2 numbers\n");
        printf("2. Difference of 2 numbers\n");
        printf("3. Product of 2 numbers\n");
        printf("4. Quotient of 2 numbers\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Sum: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Difference: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Product: %.2f\n", num1 * num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero.\n");
                } else {
                    printf("Quotient: %.2f\n", num1 / num2);
                }
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);
    return 0;
}
