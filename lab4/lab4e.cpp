#include<iostream>
#include<iomanip>
using namespace std;

double commissionCalculator(int roles, double sales);

int main(void) {
    cout << "\n\nCAR SALES COMMISSION CALCULATOR" << endl;
    cout << "Description: This app will calculate your commission on your total sales of the day." << endl;

    cout << "\nWhat is your role?: (1) Salesperson (2) Loan Officer" << endl;
    cout << "Please enter your role (1 or 2): ";
    int role;
    cin >> role;

    cout << "\nROLE: " << (role == 1 ? "Salesperson" : "Loan Officer" ) << endl;
    cout << "Total sales: ";
    double sales;
    cin >> sales;

    cout << "\nTOTAL SALES: $" << fixed << setprecision(2) << sales << endl;
    cout << "TOTAL COMMISSION: $" << commissionCalculator(role, sales);

    return 0;
}

double commissionCalculator(int role, double sales) {
    if (role == 1) {
        if (sales <= 12000) {
            return sales * (0.021);
        } else if (sales > 12000 && sales < 22000) {
            return sales * (0.029);
        } else {
            return sales * (0.032);
        }
    } else {
        if (sales <= 12000) {
            return sales * (0.05);
        } else if (sales > 12000 && sales < 22000) {
            return sales * (0.07);
        } else {
            return sales * (0.01);
        }
    }
}