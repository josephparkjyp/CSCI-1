#include<iostream>
#include<iomanip>
using namespace std;

double linearFunction(double x);

int main(void) {

    double x;

    cout << "This program takes an input from the user and returns the solution to the function f(x) = 7x - 2." << endl;
    cout << "Enter an x-value: ";
    cin >> x;

    cout << "Result: f(" << x << ") = 7(" << x << ") - 2 = " << fixed << setprecision(1) << linearFunction(x);

    return 0;
}

double linearFunction(double x) {
    return 7 * x - 2;
}