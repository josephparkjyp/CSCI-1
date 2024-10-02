#include<iostream>
using namespace std;

bool checkForA(int x);

int main(void) {
    cout << "This app will let you know if you got an A or not" << endl;
    cout << "Enter your percent grade: ";
    int percentGrade;
    cin >> percentGrade;
    if (checkForA(percentGrade)) {
        cout << "You have earned an A.";
    } else {
        cout << "You have not earned an A.";
    }

    return 0;
}

bool checkForA(int x) {
    return (x > 89 && x <= 100);
}