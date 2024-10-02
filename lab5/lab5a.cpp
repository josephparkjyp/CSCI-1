#include<iostream>
#include<string>
using namespace std;

double linearFunction(int x);
bool gameController();

void functionTable(int start = -2, int end = 3);

int main(void) {
    
    cout << "\n\nHere is a table of values for the function f(x) = 5x^2-x+7:" << endl;
    functionTable();
    cout << "\nNow try it yourself. Define a start and end value for x." << endl;

    bool status = true;
    while (status) {
        cout << "\nEnter a start value: ";
        int start;
        cin >> start;

        cout << "Enter an end value: ";
        int end;
        cin >> end;

        functionTable(start, end);
        status = gameController();
    }
    
    return 0;
}

double linearFunction(int x) {
    return (5 * x * x - x + 7) * 1.000;
}

void functionTable(int start, int end) {
    cout << "\nx\t|\ty" << endl;
    cout << "------------------" << endl;

    for (start; start <= end; start++) {
        cout << start << "\t|\t" << linearFunction(start) << endl;
    }
}

bool gameController() {
    cout << "\nWould you like to make another table? (y,n): ";
    string ans;
    cin.ignore();
    getline(cin, ans);

    return (ans == "y" || ans == "Y" ? true : false);
}