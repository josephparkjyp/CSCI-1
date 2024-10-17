#include <iostream>
using namespace std;

void populateIntArray(int a[], const int size);
void printArrayContents(int a[], const int size);
void printArrayAddresses(int a[], const int size);

int main(void) {

    srand(time(0));
    const int size = 5;
    int myArray[size];

    populateIntArray(myArray, size);
    printArrayContents(myArray, size);
    printArrayAddresses(myArray, size);

    return 0;
}

void populateIntArray(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = 1 + rand() % 100;
    }
}

void printArrayContents(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << "\t";
    }
    cout << "\n";
}

void printArrayAddresses(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << &a[i] << "\t";
    }
    cout << "\n";
}