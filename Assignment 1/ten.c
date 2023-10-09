#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum using conditional expressions (ternary operators)
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}

