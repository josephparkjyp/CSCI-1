#include <iostream>
using namespace std;

int main(void) {

    srand(time(0));
    const int size = 10;
    int a[size];

    for (int i = 0; i < size; i++) {
        a[i] = 7;
        cout << a[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        a[i] = 3 + rand() % 47;
        cout << a[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        a[i] = 2 * i + 2;
        cout << a[i] << endl;
    }

    const int n = 100;
    double b[n];

    for (int i = 0; i < n; i++) {
        b[i] = 1.00 * i / 2;
        cout << b[i] << endl;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << b[i] << endl;
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += 1.00* b[i];
    }

    cout << sum << endl;

    return 0;
}