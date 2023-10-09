#include <stdio.h>

int main() {
    int num, originalNum, newNum = 0;
    int divisor = 10000;

    // Input a five-digit number
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    // Check if the input is a five-digit number
    if (num < 10000 || num > 99999) {
        printf("Input is not a five-digit number.\n");
        return 1; // Exit with an error code
    }

    // Create a new number by adding one to each digit
    while (divisor > 0) {
        int digit = num / divisor;
        newNum = newNum * 10 + (digit + 1);
        num = num % divisor;
        divisor /= 10;
    }

    // Print the new number
    printf("New number: %d\n", newNum);

    return 0;
}

