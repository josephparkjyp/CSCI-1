#include <iostream>
using namespace std;

void printArray(bool arg[], const int size);

int main(void) {

    const int size = 1000;
    bool a[size];

    for (int i = 0; i < size; i++) {
        if (i == 2) {
            a[i] = true;
        } else if (i % 2 == 0) {
            a[i] = false;
        } else {
            a[i] = true;
        }
        
    }

    for (int j = 2; j < size; j++) {
        for (int i = j + 1; i < size; i++) {
            if (i % j == 0) {
                a[i] = false;
            }
        }
    }

    printArray(a, size);
    return 0;
}

void printArray(bool arg[], const int size) {
    int count = 0;
    for (int i = 2; i < size; i++) {
        //cout << i << " is " << (!arg[i] ? "not " : "") << "prime" << endl;
        if (arg[i]) {
            cout << i << "\t";
            count += 1;
            if (count == 13) {
                count = 0;
                cout << "\n";
            }
        }
    }
}