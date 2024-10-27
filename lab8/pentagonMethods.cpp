#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;

struct Pentagon {

    double sideLength, radius;
    string color;

    void print(void);
    double perimeter(void);
    double area(void);

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

        pentagons[i].print();
    }

    //printPentagons(pentagons, size);

    return 0;
}

void printPentagons(Pentagon pentagons[], const int size) {
    cout << "#\t" << "Side Length:\t" << "Radius:\t" << "Color:\t" << endl;

    for (int i = 0; i < size; i++) {
        cout << i + 1 << "\t" << fixed << setprecision(0) << pentagons[i].sideLength << "\t\t" << fixed << setprecision(2) << pentagons[i].radius << "\t" << pentagons[i].color << "\t" << endl;
    }
}

void Pentagon::print(void) {
    cout << "\n";
    cout << "Side Length: " << sideLength << endl;
    cout << "Radius: " << radius << endl;
    cout << "Color: " << color << endl;
    cout << "Perimeter: " << perimeter() << endl;
    cout << "Area: " << area() << endl;
}

double Pentagon::perimeter(void) {
    return (5 * sideLength);
}

double Pentagon::area(void) {
    return (0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * (sideLength * sideLength));
}