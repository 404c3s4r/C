// Write a program in C that converts a temperature from Celsius to Fahrenheit or from Fahrenheit to Celsius, depending on the user's choice.
// The program should ask the user which conversion he wants to perform and then request the corresponding temperature.
#include <stdio.h> 

#define text "Temperature Converter"

// First let's do from Celsius to Fahrenheit

float celsiusToFahrenheit(float celsius) {
    return 1.8 * celsius + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    int choice;
    float celsius, fahrenheit, result;
    
    printf("%s\n", text);
    printf("Enter:\n1 Celsius to Fahrenheit\n2 Fahrenheit to Celsius\n");   
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter a value in Celsius: ");
            scanf("%f", &celsius);
            result = celsiusToFahrenheit(celsius);
            printf("%.1f F", result);
            break;
        
        case 2:
            printf("Enter a value in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            result = fahrenheitToCelsius(fahrenheit);
            printf("%.1f C", result);
            break;
        default:
            printf("Invalid option");
            break;
    }

    return 0;
}
