#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    // TODO: return inches converted to centimeters.
    return inches*CENTIMETERS_PER_INCH;
}

double centimetersToInches(double centimeters) {
    // TODO: return centimeters converted to inches.
    return centimeters*(1.0/CENTIMETERS_PER_INCH);
}

double poundsToKilograms(double pounds) {
    // TODO: return pounds converted to kilograms.
    return pounds*(1/POUNDS_PER_KILOGRAM);
}

double kilogramsToPounds(double kilograms) {
    // TODO: return kilograms converted to pounds.
    return kilograms*POUNDS_PER_KILOGRAM;
}

double fahrenheitToCelsius(double fahrenheit) {
    // TODO: return Fahrenheit converted to Celsius.
    return (fahrenheit - 32)/(9.0/5.0);
}

double celsiusToFahrenheit(double celsius) {
    // TODO: return Celsius converted to Fahrenheit.
    return celsius*(9.0/5.0) + 32;
}

bool isValidMenuChoice(int choice) {
    // TODO: return true when choice is between EXIT_CHOICE and CELSIUS_TO_FAHRENHEIT.
    return (choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT);
}

bool requiresNonNegativeValue(int choice) {
    // Length and weight conversions cannot use negative values.
    // Temperature conversions may use negative values.
    // TODO: return true for choices 1 through 4.
    return (choice >= 1 && choice <= 4);
}

bool isValidValueForChoice(int choice, double value) {
    // TODO:
    // 1. Invalid menu choices should return false.
    // 2. Length and weight conversions should reject negative values.
    // 3. Temperature conversions should allow negative values.
    if(!isValidMenuChoice(choice)) return false;

    if(requiresNonNegativeValue(choice) && value < 0) return false;

    return true;
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}
