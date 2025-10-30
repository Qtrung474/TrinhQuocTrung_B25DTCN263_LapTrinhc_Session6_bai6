#include <stdio.h>

int main() {
    int num1, num2, num3;
    int choice;
    int numbersEntered = 0;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Enter 3 numbers\n");
        printf("2. Sum of 3 numbers\n");
        printf("3. Average of 3 numbers\n");
        printf("4. Smallest number\n");
        printf("5. Largest number\n");
        printf("6. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        if (choice >= 2 && choice <= 5 && numbersEntered == 0) {
            printf("Please enter 3 numbers first!\n");
            continue;
        }
        switch (choice) {
            case 1:
                printf("Enter 3 integers: ");
                scanf("%d %d %d", &num1, &num2, &num3);
                numbersEntered = 1;
                break;
            case 2:
                printf("Sum: %d\n", num1 + num2 + num3);
                break;
            case 3:
                printf("Average: %.2f\n", (double)(num1 + num2 + num3) / 3.0);
                break;
            case 4: {
                int min = num1;
                if (num2 < min) {
                    min = num2;
                }
                if (num3 < min) {
                    min = num3;
                }
                printf("Smallest number: %d\n", min);
                break;
            }
            case 5: {
                int max = num1;
                if (num2 > max) {
                    max = num2;
                }
                if (num3 > max) {
                    max = num3;
                }
                printf("Largest number: %d\n", max);
                break;
            }
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 6);
    return 0;
}
