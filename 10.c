#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number;
    int digit;
    int temp_number;

    printf("Enter any integer: ");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number == 0) {
        printf("The digits are: 0\n");
        return 0;
    }

    temp_number = abs(number);

    printf("The digits are (in reverse order): ");
    
    while (temp_number > 0) {
        digit = temp_number % 10;
        printf("%d ", digit);     
        temp_number /= 10;        
    }
    
    printf("\n"); 

    return 0;
}
