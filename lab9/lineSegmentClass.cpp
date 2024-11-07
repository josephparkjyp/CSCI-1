// Design and implement a Point class which models points in the Cartesian coordinate system (done in class already).

// Design and implement a Segment class using the idea that 2 points determine a line segment.

// Be sure to include the following methods:
// 1. At least one constructor with defaults.
// 2. Accessor, Get and Set methods.
// 3. Appropriate useful utility methods (print and length at the very minimum).

// 4. In the main, construct a vector of 50 Segments with random points in Quadrant 1 (QI) ranging from 0 to 1 on the x-axis and 0 to 1 on the y-axis. 

// Write a main driver program (no user input) that demonstrates the usage of your class designs.

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

class Point {
    private:
        double x, y;
    public:
        Point();
        Point(double argX = 0, double argY = 0);
        double getX();
        double getY();
        void setX(double argX);
        void setY(double argY);
        void print();
        double length(Point arg);
};

class LineSegment {
    private:
        Point p1, p2;
    public:
        LineSegment();
        LineSegment(Point argP1, Point argP2);
        Point getP1();
        Point getP2();
        void setP1(Point argP1);
        void setP2(Point argP2);
        void print();
        double length();
};

int main(void) {

    srand(time(0));
    int size = 50;
    vector<Point> myVec;

    for (int i = 0; i < size; i++) {
        myVec.push_back(Point(rand() % 100 / 100.0, rand() % 100 / 100.0));
        myVec[i].print();
    }

    return 0;
}

Point::Point() {
    setX(0);
    setY(0);
}

Point::Point(double argX, double argY) {
    setX(argX);
    setY(argY);
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::setX(double argX) {
    x = argX;
}
void Point::setY(double argY) {
    y = argY;
}

void Point::print() {
    cout <<  "(" << getX() << "," << getY() << ")" << endl;
}

double Point::length(Point arg) {
    return sqrt(pow(getX()-arg.x,2) + pow(getX()-arg.y,2));
}


        // LineSegment(Point argP1 = 0, Point argP2 = 0);
        // Point getP1();
        // Point getP2();
        // void setP1(double argP1);
        // void setP2(double argP2);
        // void print();
        // double length();

LineSegment::LineSegment(Point argP1, Point argP2) {
    setP1(argP1);
    setP2(argP2);
}

Point LineSegment::getP1() {
    return p1;
}

Point LineSegment::getP2() {
    return p2;
}

void LineSegment::setP1(Point argP1) {
    p1 = argP1;
}

void LineSegment::setP2(Point argP2) {
    p2 = argP2;
}

