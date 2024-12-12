#include <iostream>
#include <iomanip>
using namespace std;

class TrustFund {
    public:
        double principal;
        double currentAmount;
        double rate;

        TrustFund(double arg1, double arg2, double arg3);
        double interest();
        void updateCurrentAmount();
};

int main(void) {

    char response = 'y';
    double principal, rate;
    int years;

    cout << "Welcome to the Simple Interest Trust Fund Calculator!" << endl << endl;
    while (response == 'y') {
        cout << "Enter the initial principal amount: ";
        cin >> principal;
        cout << "Enter the annual interest rate (in %): ";
        cin >> rate;
        rate = rate / 100.0;
        cout << "Enter the number of years: ";
        cin >> years;
        cout << endl;

        TrustFund myTrust(principal, principal, rate);

        for (int t = 1; t <= years; t++) {
            cout << fixed << setprecision(0) << "Year " << t << fixed << setprecision(2) << ": Principal = $" << myTrust.principal << ", Interest = $" << myTrust.interest() << ", Total = $";
            myTrust.updateCurrentAmount();
            cout << myTrust.currentAmount << endl;
        }

        cout << "\nFinal amount after " << fixed << setprecision(0) << years << fixed << setprecision(2) << " years: $" << myTrust.currentAmount << endl;
        cout << "Thank you for using the Simple Interest Trust Fund Calculator!" << endl << endl;
        cout << "Would you like to run again? (y or n): ";
        cin >> response;
    }

    return 0;
}

TrustFund::TrustFund(double arg1, double arg2, double arg3) {
    principal = arg1;
    currentAmount = arg2;
    rate = arg3;
}

double TrustFund::interest() {
    return currentAmount * (rate);
}

void TrustFund::updateCurrentAmount() {
    currentAmount += interest();
}