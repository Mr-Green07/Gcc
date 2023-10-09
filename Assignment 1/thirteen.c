#include <stdio.h>

int main() {
    int n, sum;

    // Input the value of n
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum using the formula
    sum = (n * (n + 1)) / 2;

    // Print the sum
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

