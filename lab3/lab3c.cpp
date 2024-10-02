#include <iostream>
using namespace std;

double pi = 3.14159;

double circleArea(double radius);
double circleCircumference(double radius);

int main(void) {
    double diameter;
    
    cout << "Enter the circle's DIAMETER: ";
    cin >> diameter;
    cout << endl;

    double radius = diameter / 2;

    cout << "Radius: r = " << radius << endl;
    cout << "Circumference: P = 2*3.14159*" << radius << " = " << circleCircumference(radius) << " units" << endl;
    cout << "Area: A = 3.14159*" << radius << "^2 = " << circleArea(radius) << " square units";

    return 0;
}

double circleArea(double radius) {
    return pi * radius * radius;
}

double circleCircumference(double radius) {
    return 2 * pi * radius;
}