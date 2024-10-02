#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double triangleArea( double a, double b, double c );

int main(void) {

    double a, b, c;

    cout << "This program calculates the area of any triangle given the length of each side." << endl;
    cout << "Please enter the three sides (a, b, c) of a triangle." << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << endl;
    cout << "Area of the triangle with sides " << a << ", " << b << ", and " << c << ": " << fixed << setprecision(1) << triangleArea(a, b, c);

    return 0;
}

double triangleArea( double a, double b, double c ) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}