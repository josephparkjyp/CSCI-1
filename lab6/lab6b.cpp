#include <iostream>
using namespace std;

double average(double a[], const int size);

int main(void) {
    cout <<"\n\nThis program calculates the average of 5 array elements." << endl << endl;
    
    const int size = 5;
    double data[size];

    char play = 'y';

    do {
        
        for (int i = 0; i < size; i++) {
            cout <<"Enter value #" << i + 1 << ": ";
            cin >> data[i];
        }

        cout << "\nSum of your 5 array values: " << average(data, size); 

        cout << "\nPlay again? (y/n): ";
        cin >> play;

    } while (play == 'y');

    return 0;
}

double average(double a[], const int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }

    return sum;
}