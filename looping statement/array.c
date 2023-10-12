#include <stdio.h>

int main() {
    int roll_numbers[35];
    
    for (int i = 0; i < 35; i++) {
        printf("Enter roll number for student %d: ", i+1);
        scanf("%d", &roll_numbers[i]);
    }

    // print out the roll numbers stored in the array
    printf("Roll numbers of students:\n");
    for (int i = 0; i < 35; i++) {
        printf("Roll No of %d = %d\n",i, roll_numbers[i]);
    }

    return 0;
}
