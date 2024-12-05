#include <iostream>
using namespace std;

double pow(double b, int n);
int factorial(int n);
double sine(double x, int n);
double deg2rad(double deg);

int main(void) {
    cout << "This program uses taylor series to approimate the value of sin(x)." << endl;
    double deg;
    int n;
    char ans;
    do {
        cout << "Choose a value less between -90 and 90 degrees: ";
        cin >> deg;
        cout << "Choose a value for n (iterations of series): ";
        cin >> n;
        cout << sine(deg2rad(deg), n);
        cout << "\nTry another angle? (y/n): ";
        cin >> ans;
    } while (ans == 'y');
    
}

int factorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

double pow(double b, int n) {
    if (n == 0) return 1.0;
    double pow = b;
    for (int i = 1; i < n; i++) {
        pow *= b;
    }
    return pow;
}

double sine(double x, int n) {
    double sine = 0;
    for (int i = 0; i < n - 1; i++) {
        sine += (1.0 * pow(-1, i) / factorial(2*i + 1)) * pow(x, 2*i + 1);
    }
    return sine;
}

double deg2rad(double deg) {
    return deg * (3.14 / 180);
}