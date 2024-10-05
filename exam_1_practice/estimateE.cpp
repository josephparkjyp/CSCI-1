#include<iostream>
#include<iomanip>
using namespace std;

int factorial(int n);
double pow(int b, double t);
double powerE(double t, int n);

int main(void) {
    cout << "\n\nDESCRIPTION: This program uses a series (Maclarin Series) to estimate the value of e^t by specifying a value of n (number of terms in the series)." << endl;
    
    char playAgain;
    do {
        cout << "\nPlease enter a value for t (e^t): ";
        double t;
        cin >> t;

        int n;
        do {
            cout << "Please enter a value for n less than 15 (number of terms): ";
            cin >> n;
        } while (n > 15);

        cout << "\nEstimate of e^" << fixed << setprecision(0) << t << fixed << setprecision(3) << ": " << powerE(t, n) << endl;
        
        cout << "\nCalculate again? (y/n): ";
        cin >> playAgain;
     } while (playAgain == 'Y' || playAgain == 'y');
    
    
    return 0;
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double pow(int b, double t) {
    if (t == 0) {
        return 1;
    } else {
        return b * pow(b, t - 1);
    }
}

double powerE(double t, int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return (pow(t, n - 1)) * (1.0) / factorial(n - 1) + powerE(t, n - 1);
}