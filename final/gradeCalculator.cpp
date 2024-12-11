#include <iostream>
using namespace std;

double weightedAverage(int hw, int exam, int final);
char letterGrade(double weightedAverage);

int main(void) {

    char response = 'y';
    int hw;
    int exam;
    int final;
    cout << "This app will input your homework, exam, and final scores and compute the weighted average and letter grade." << endl;
    
    while (response == 'y') {

        cout << "Input your homework grade: ";
        cin >> hw;
        cout << "Input your exam grade: ";
        cin >> exam;
        cout << "Input your final grade: ";
        cin >> final;

        double avg = weightedAverage(hw, exam, final);
        cout << "Your weighted average: " << avg << endl;
        cout << "Your letter grade: " << letterGrade(avg) << endl;
        cout << "Again? (y/n): ";
        cin >> response;
    }

    return 0;
}


double weightedAverage(int hw, int exam, int final) {
    return 0.1 * hw + 0.6 * exam + 0.3 * final;
}

char letterGrade(double weightedAverage) {
    if (weightedAverage >= 90) {
        return 'A';
    } else if (weightedAverage >= 80) {
        return 'B';
    } else if (weightedAverage >= 70) {
        return 'C';
    } else {
        return 'D';
    }
}