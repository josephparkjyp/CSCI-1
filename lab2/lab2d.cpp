#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(void) {

    string server_name;
    double service_amount;
    double tip_percentage;

    cout << "Please enter your first name: ";
    getline(cin, server_name);
    cout << "What is the cost of service?: ";
    cin >> service_amount;
    cout << "What percent do you want to tip?: ";
    cin >> tip_percentage;
    cout << endl;

    cout << "Server Name: \t" << server_name << endl;
    cout << fixed << setprecision(2);
    cout << "Food Cost: \t$" << service_amount << endl;
    cout << "Tip: \t\t$"<< service_amount * tip_percentage * 0.01 << endl;
    cout << "Total Bill: \t$" << service_amount * tip_percentage * 0.01 + service_amount;


    return 0;
}