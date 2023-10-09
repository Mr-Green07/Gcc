#include <stdio.h>

int main() {
    float floatNumber;
    int intNumber;

    // Input a float number from the user
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter a float number: ");
    scanf("%f", &floatNumber);

    // Type cast the float to int
    intNumber = (int)floatNumber;

    // Print the integer value
    printf("Integer value: %d\n", intNumber);

    return 0;
}

