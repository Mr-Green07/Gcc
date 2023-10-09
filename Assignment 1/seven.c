#include <stdio.h>

int main() {
    int C, D, temp;

    // Input two numbers
     printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter the value of C: ");
    scanf("%d", &C);

    printf("Enter the value of D: ");
    scanf("%d", &D);

    // Interchange the contents of C and D using a temporary variable
    temp = C;
    C = D;
    D = temp;

    // Print the values after interchange
    printf("After interchange:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}

