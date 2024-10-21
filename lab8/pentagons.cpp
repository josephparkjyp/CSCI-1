#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;

struct Pentagon {

    double sideLength, radius;
    string color;

};

void printPentagons(Pentagon pentagons[], const int size);

int main(void) {

    srand(time(0));
    string colors[] = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};
    const int size = 50;
    Pentagon pentagons[size];

    for (int i = 0; i < size; i++) {
        pentagons[i].sideLength = 1+ rand() % 10;
        pentagons[i].radius = (sqrt(50.0 + 10.0 * sqrt(5.0)) / 10.0) * pentagons[i].sideLength;
        pentagons[i].color = colors[rand() % 7];
    }

    printPentagons(pentagons, size);

    return 0;
}

void printPentagons(Pentagon pentagons[], const int size) {
    cout << "#\t" << "Side Length:\t" << "Radius:\t" << "Color:\t" << endl;

    for (int i = 0; i < size; i++) {
        cout << i + 1 << "\t" << fixed << setprecision(0) << pentagons[i].sideLength << "\t\t" << fixed << setprecision(2) << pentagons[i].radius << "\t" << pentagons[i].color << "\t" << endl;
    }
}