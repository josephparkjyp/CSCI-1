#include<iostreaM>
#include<iomanip>
using namespace std;

double linearFunction(double m, double b, double x);

int main(void) {

    double m, b, x;

    cout << "This program takes 3 inputs from the user:" << endl;
    cout << "1. Slope (m)" << endl;
    cout << "2. Y-Intercept (b)" << endl;
    cout << "3. X-Value (x)" << endl;
    cout << "Afterwards, it returns the solution to this linear function: f(x) = mx + b." << endl << endl;

    cout << "Enter slope m: ";
    cin >> m;
    cout << "Enter b: ";
    cin >> b;
    cout << "Your given function: f(x) = " << m << "x + " << b << endl << endl;

    cout << "Enter an x-value: ";
    cin >> x;
    cout << "Result: f(" << x << ") = " << m << "(" << x << ") + " << b << " = " << fixed << setprecision(1) << linearFunction(m, b, x); 

    return 0;
}

double linearFunction(double m, double b, double x) {
    return m * x + b;
}