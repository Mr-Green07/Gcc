#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Input the number of days
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years, weeks, and remaining days
    years = days / 365;          // 1 year = 365 days
    weeks = (days % 365) / 7;    // 1 week = 7 days
    remainingDays = days % 7;

    // Print the conversion
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);

    return 0;
}

