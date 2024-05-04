#include <stdio.h>

double kmsToMiles(double kms) {
    return 0.621371 * kms;
}

double inchesToFeet(double inches) {
    return 0.0833333 * inches;
}

double cmsToInches(double cms) {
    return 0.393701 * cms;
}

double poundToKgs(double pounds) {
    return 0.453592 * pounds;
}

double inchesToMeters(double inches) {
    return 0.0254 * inches;
}

double performConversion(int choice, double value) {
    switch (choice) {
        case 1:
            return kmsToMiles(value);
        case 2:
            return inchesToFeet(value);
        case 3:
            return cmsToInches(value);
        case 4:
            return poundToKgs(value);
        case 5:
            return inchesToMeters(value);
        default:
            printf("Invalid choice\n");
            return -1; 
    }
} 

int main() {
    int choice;
    double value;

    printf("Enter the conversion type:\n");
    printf("1. Kms to Miles\n2. Inches to Feet\n3. Cms to Inches\n4. Pound to Kgs\n5. Inches to Meters\n");
    scanf("%d", &choice);

    printf("Enter the value to convert: ");
    scanf("%lf", &value);

    double result = performConversion(choice, value);

    if (result != -1) {
        printf("Result: %.2lf\n", result);
    }

    return 0;
}
