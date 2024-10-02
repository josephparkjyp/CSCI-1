#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void linearEquationSolver();
void gameLoop();

int main(void) {
    cout << "\n\nDESCRIPTION: This program will take in values of a, b, and c to populate the linear equation: ax + b = c." << endl;
    cout << "Afterwards, it will show the steps to solve the linear equation." << endl;

    gameLoop();
    return 0;
}

void linearEquationSolver() {
    cout << "\nPlease enter values for a, b, and c." << endl;
    double a, b, c;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << "\nYour equation:\t" << a << (b < 0 ? "x - " : "x + ") << abs(b) << " = " << c << endl;
    cout << "First step:\t" << a << "x = " << c - b << endl;
    cout << "Second step:\t" << "x = " << (c - b) / a * 1.0 << endl;
}

void gameLoop() {
    char response;
    do {
        linearEquationSolver();
        cout << "\nWould you like to run again? (y or n): ";
        cin >> response;
    } while (response == 'y' || response == 'Y');
}