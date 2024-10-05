#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(void) {

    bool cont = true;
    string name;
    double hours, wage, base, overtime, superOvertime;
    char ans;

    cout << "\n\nThis program calculates employee weekly wage by the number of hours worked." << endl;

    do {

        base = 0;
        overtime = 0;
        superOvertime = 0;

        cout << "\nPlease enter employee's full name: ";
        getline(cin, name);

        cout <<"\nPlease enter " << name << "'s hours worked this week: ";
        cin >> hours;

        cout <<"\nPlease enter " << name << "'s hourly wage: ";
        cin >> wage;

        if (hours <= 40) {
            base = hours * wage;
        } else if (hours > 40 && hours <= 50) {
            base = (40 * wage);
            overtime = (hours - 40) * (wage * 1.5);
        } else {
            base = (40 * wage);
            overtime = (10 * wage * 1.5);
            superOvertime = (hours - 50) * (wage * 2.0);
        }

        cout << fixed << setprecision(2) << "\n\n";
        cout << "Employee: \t\t" << name << endl;
        cout << "Base Pay: \t\t$" << base << endl;
        cout << "Overtime Pay: \t\t$" << overtime << endl;
        cout << "Super Overtime Pay: \t$" << superOvertime << endl;
        cout << "Total Pay: \t\t$" << base + overtime + superOvertime << endl;

        cout << "\n\nIs there another wage to calculate? (y/n): ";
        cin >> ans;

        if (ans == 'n') {
            cont = false;
        }

        cin.ignore();

    } while (cont == true);

    return 0;
}