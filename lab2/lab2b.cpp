#include <iostream>
using namespace std;

double pi = 3.14159;

int main(void) {
    double diameter;
    
    cout << "Enter the circle's DIAMETER: ";
    cin >> diameter;
    cout << endl;

    cout << "Radius: r = " << diameter / 2 << endl;
    cout << "Circumference: P = 2*3.14159*" << diameter / 2 << " = " << pi * diameter << " units" << endl;
    cout << "Area: A = 3.14159*" << diameter / 2 << "^2 = " << pi * (diameter / 2) * (diameter / 2) << " square units";

    return 0;
}