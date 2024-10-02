#include <iostream>
#include <iomanip>
using namespace std;

double convertF2C(double fahrenheit);

int main(void) {

    double fahrenheit;
    cout << "This program will convert degrees fahrenheit to degrees celcius." << endl;
    cout << "Please enter a temperature in degrees fahrenheit: ";
    cin >> fahrenheit;

    cout << fahrenheit << " degrees fahrenheit is equivalent to " << fixed << setprecision(1) << convertF2C(fahrenheit) << " degrees celcius";

    return 0;
}

double convertF2C(double fahrenheit) {
    return (fahrenheit - 32) * (5.0 / 9.0);
}