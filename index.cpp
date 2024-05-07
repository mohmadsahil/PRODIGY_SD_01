#include <iostream>
#include <iomanip>
using namespace std;

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsius_to_kelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheit_to_kelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

double kelvin_to_celsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvin_to_fahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

int main() {
    double temperature;
    string original_unit;

    cout << "Enter the temperature value: ";
    cin >> temperature;
    cout << "Enter the original unit of measurement (Celsius, Fahrenheit, or Kelvin): ";
    cin >> original_unit;

    cout << fixed << setprecision(2);

    if (original_unit == "Celsius" || original_unit == "celsius") {
        double fahrenheit = celsius_to_fahrenheit(temperature);
        double kelvin = celsius_to_kelvin(temperature);
        cout << temperature << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit and " << kelvin << " Kelvin." << endl;
    } 
    else if (original_unit == "Fahrenheit" || original_unit == "fahrenheit") {
        double celsius = fahrenheit_to_celsius(temperature);
        double kelvin = fahrenheit_to_kelvin(temperature);
        cout << temperature << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius and " << kelvin << " Kelvin." << endl;
    } 
    else if (original_unit == "Kelvin" || original_unit == "kelvin") {
        double celsius = kelvin_to_celsius(temperature);
        double fahrenheit = kelvin_to_fahrenheit(temperature);
        cout << temperature << " Kelvin is equal to " << celsius << " degrees Celsius and " << fahrenheit << " degrees Fahrenheit." << endl;
    } 
    else {
        cout << "Invalid unit of measurement. Please enter either Celsius, Fahrenheit, or Kelvin." << endl;
    }

    return 0;
}
