
#include <stdio.h>
#include <ctype.h> // Include the ctype.h library for tolower() function

int main() {
    char upperChar, lowerChar;

    // Input an uppercase character
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter an uppercase character: ");
    scanf(" %c", &upperChar); // Note the space before %c to consume any newline character

    // Convert to lowercase using tolower()
    lowerChar = tolower(upperChar);

    // Print the lowercase character
    printf("The lowercase character is: %c\n", lowerChar);

    return 0;
}
