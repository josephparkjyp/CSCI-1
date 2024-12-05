#include <iostream>
#include <cmath>
#include "Line.h"
#include "Point.h"
using namespace std;

int main(void) {

    Line myLine(Point(1,-3), Point(5,-10));

    cout << myLine.slope() << endl;
    cout << myLine.intercept() << endl;
    myLine.print();
    cout << myLine.eval(-4) << endl;

    return 0;
}