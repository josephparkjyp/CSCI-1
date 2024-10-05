#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

void quadraticSolver(double a, double b, double c);

int main(void) {

    cout << "\n\nDESCRIPTION: This program will calculate your quadratic's roots for you!" << endl;
    cout << "Quadratics have the form y= ax^2 + bx + c. In order to use this program, please enter the values for a, b, and c." << endl;
    
    char play;
    do {
        cout << "\nPlease enter a, b, c separated by spaces (e.g. -5 7 -3): ";
        string response;
        getline(cin, response);

        double a, b, c;
        a = stod(response.substr(0, response.find(" ")));
        b = stod(response.substr(response.find(" ") + 1, response.find_last_of(" ") - response.find(" ")));
        c = stod(response.substr(response.find_last_of(" ") + 1, response.length()));

        cout << fixed << setprecision(0);
        cout << "\nYour equation: y = " << a << "x^2" << (b >= 0 ? " + " : " - ") << abs(b) << "x" << (c >= 0 ? " + " : " - ") << abs(c) << endl;

        quadraticSolver(a, b, c);

        cout << "\nCalculate again? (y/n): ";
        cin >> play;
        cin.ignore();
    } while (play == 'Y' || play == 'y');
    
    return 0;
}

void quadraticSolver(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    
    double rootLeft = (-1 * b) / (2 * a);
    double rootRight = (sqrt(abs(discriminant))) / (2 * a);

    cout << fixed << setprecision(4);

    if (!discriminant) {
        cout << "Has root: x = " << rootLeft + rootRight << endl; 
    } else if (discriminant > 0) {
        cout << "Has roots: x = " << rootLeft + rootRight << " and x = " << rootLeft - rootRight << endl;
    } else {
        cout << "Has roots: x = " << rootLeft << " + " << rootRight << "i and x = " << rootLeft << " - " << rootRight << "i" << endl;
    }
}