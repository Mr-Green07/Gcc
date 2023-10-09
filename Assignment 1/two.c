#include<stdio.h>

int main() {
    double distance_in_kilometers;
    double meters, feet, inches, centimeters;

    // Taking input from the user
    printf("Name: Vivek Yadav\n");
    printf("UID: 23BCS13432\n");
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%lf", &distance_in_kilometers);

    // Conversion factors
    meters = distance_in_kilometers * 1000;
    feet = distance_in_kilometers * 3280.84;
    inches = distance_in_kilometers * 39370.1;
    centimeters = distance_in_kilometers * 100000;

    // Printing the converted distances
    printf("Distance in meters: %.2lf meters\n", meters);
    printf("Distance in feet: %.2lf feet\n", feet);
    printf("Distance in inches: %.2lf inches\n", inches);
    printf("Distance in centimeters: %.2lf centimeters\n", centimeters);

    return 0;
}