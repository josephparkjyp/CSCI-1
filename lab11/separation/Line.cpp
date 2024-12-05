#include "Line.h"
#include "Point.h"
#include <iostream>

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
    std::cout << "y = " << slope() << "x" << (intercept() < 0 ? " - " : " + ") << abs(intercept()) << std::endl;
}

double Line::eval(double input) {
    return slope() * input + intercept();
}