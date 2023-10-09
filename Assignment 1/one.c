#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    char str[100]; // Assuming a maximum string length of 100 characters

    // Input values
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a character: ");
    scanf(" %c", &c); // Note the space before %c to consume any newline character

    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Read the entire line as a string (including spaces)

    // Print values separated by newline characters
    printf("Integer value: %d\n", a);
    printf("Float value: %.2f\n", b); // Printing with two decimal places
    printf("Character value: %c\n", c);
    printf("String: %s\n", str);

    return 0;
}

