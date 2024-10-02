#include<iostream>
using namespace std;

double quadraticDiscriminant(double a, double b, double c);

int main(void) {

    double a, b, c;

    cout << "Quadratic Equation Solution Determinator" << endl;
    cout << "Enter the coefficients of ax^2 + bx + c = 0. \n\n" << endl;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    double quadDisc = quadraticDiscriminant(a, b, c);
    cout << "The discriminant is " << quadDisc << endl;
    if (quadDisc > 0) {
        cout << "Two real solutions.";
    } else if (quadDisc < 0) {
        cout << "Two complex solutions.";
    } else {
        cout << "One real solution";
    }

    return 0;
}

double quadraticDiscriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}