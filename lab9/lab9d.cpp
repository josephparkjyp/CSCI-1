// Redesign the line class where two points can determine a line.  That is, this model will store two points only. All information about the line can be calculated from these two points.

// 1. Code a method that calculates and returns the slope.
// 2. Code a method that nicely outputs the lines in the form y = mx + b.
// 3. Code a method that evaluates for any x-value.

// In the main, declare two Point objects and use them to instantiate ONE Line object called myLine.  Show that your methods work with NO user interface.


#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
    Point(double argX = 0, double argY = 0);
};

struct Line {
    Point p1, p2;
    Line(Point argP1 = 0, Point argP2 = 0);

    double slope(void);
    double intercept(void);
    void print(void);
    double eval(double input);
};

int main(void) {

    Line myLine(Point(1,-3), Point(5,-10));

    cout << myLine.slope() << endl;
    cout << myLine.intercept() << endl;
    myLine.print();
    cout << myLine.eval(-4) << endl;

    return 0;
}

Point::Point(double argX, double argY) {
    x = argX;
    y = argY;
};

Line::Line(Point argP1, Point argP2) {
    p1 = argP1;
    p2 = argP2;
};

double Line::slope(void) {
    return (p1.y - p2.y) / (p1.x - p2.x);

}

double Line::intercept(void) {
    return p1.y - slope() * p1.x;
}

void Line::print(void) {
    cout << "y = " << slope() << "x" << (intercept() < 0 ? " - " : " + ") << abs(intercept()) << endl;
}

double Line::eval(double input) {
    return slope() * input + intercept();
}