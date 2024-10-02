#include<iostream>
#include<cmath>
using namespace std;

double calculatePi(int numTerms);

int main(void) {

    cout << "\n\nDESCRIPTION: This program estimates the value of Pi using the infinite series." << endl;
    cout << "\nWe will calculate the sum of the first 10*n terms." << endl;
    cout << "Please specify an integer for n: ";
    int n;
    cin >> n;

    cout << "\n# of Terms\t|\tEstimate of Pi" << endl;
    cout << "--------------------------------------" << endl;

    for (int i = 10; i <= 10 * n; i += 10) {
        cout <<  "\t" << i << "\t|\t" << calculatePi(i) << endl;
    }

    return 0;
}

double calculatePi(int numTerms) {
    if (numTerms == 1) {
        return 4.0;
    } else {
        return pow(-1, numTerms - 1) * (4.0 / (2 * (numTerms - 1) + 1)) + calculatePi(numTerms - 1);
    }   
}