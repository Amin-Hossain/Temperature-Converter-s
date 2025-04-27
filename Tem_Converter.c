#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted = (temp * 9/5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", converted);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            converted = (temp - 32) * 5/9;
            printf("Temperature in Celsius: %.2f\n", converted);
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted = temp + 273.15;
            printf("Temperature in Kelvin: %.2f\n", converted);
            break;
        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            converted = temp - 273.15;
            printf("Temperature in Celsius: %.2f\n", converted);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
