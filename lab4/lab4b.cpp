#include <iostream>
using namespace std;

void carBuyingGuide(void);

int main(void) {
    carBuyingGuide();
    return 0;
}

void carBuyingGuide(void) {
    cout << "CAR BUYING GUIDE FOR THE AVERAGE MALE." << endl;
    cout << "PLEASE ANSWER TRUTHFULLY TO EACH QUESTION TO LEARN WHAT CAR TO GET VIA THIS VERY CREDIBLE PROGRAM." << endl;

    cout << "What is your age? ";
    int age;
    cin >> age;

    if (age < 40) {
        cout << "Life stage 1" << endl;
        if (age < 25) {
            cout << "Buy a Ford Focus";
        } else {
            cout << "Buy a minivan";
        }
    } else {
        cout << "Life stage 2" << endl;
        if (age < 55) {
            cout << "Buy a Corvette";
        } else {
            cout << "Buy a Lincoln Town car";
        }
    }
}