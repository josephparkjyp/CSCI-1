#pragma once
#include "Point.h"

struct Line {
    Point p1, p2;
    Line(Point argP1 = 0.0, Point argP2 = 0.0);

    double slope(void);
    double intercept(void);
    void print(void);
    double eval(double input);
};