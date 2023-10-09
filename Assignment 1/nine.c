#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use ternary operators to find the largest number
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}

