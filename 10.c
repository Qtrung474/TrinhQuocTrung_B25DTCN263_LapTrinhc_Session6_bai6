#include <stdio.h>


int main() {
    char s[100];
    int i;
    printf("Enter any integer: ");
    scanf("%s", s);
    printf("The digits are: ");
    for ( i = 0; s[i] != '\0'; i++) {
        if (s[i] == '-')
            continue;
        printf("%c ", s[i]);
    }
    return 0;
}
