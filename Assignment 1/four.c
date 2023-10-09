#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace or newline characters

    // Print the ASCII value of the character
    printf("ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}