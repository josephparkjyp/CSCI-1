#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    
    double x, y;

    void print();
    double abs();
    double distance(Point w);

};

double cubicFunction(double x);
void printPointArray(Point arg[], const int size);

int main(void) {
    
    Point a = {1,2};
    Point b = {3, 4};

    a.print();
    b.print();

    cout << a.abs() << endl;
    cout << b.abs() << endl;

    cout << a.distance(b) << endl;

    const int size = 7;
    Point points[size];
    int x_vals[size] = {-6, -4, -2, 0, 2, 4, 6};

    for (int i = 0; i < size; i++) {
        points[i] = {x_vals[i] * 1.0, cubicFunction(x_vals[i])};
    };

    printPointArray(points, size);

    return 0;
};

double cubicFunction(double x) {
    return x * x * x;
}

void printPointArray(Point arg[], const int size) {
    for (int i = 0; i < size; i++) {
        arg[i].print();
    }
}

void Point::print() {
    cout << "(x,y) = (" << x << "," << y << ")" << endl;
};

double Point::abs() {
    return (sqrt(x * x + y * y));
};

double Point::distance(Point w) {
    return (sqrt(pow(x - w.x, 2) + pow(y - w.y, 2)));
};

