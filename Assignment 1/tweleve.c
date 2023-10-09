#include <stdio.h>

int main() {
    int num, sum_of_divisors = 0;

    // Input a number
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find proper divisors and calculate their sum
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    // Check if the number is a perfect number
    if (sum_of_divisors == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

