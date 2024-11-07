#include <iostream>
#include <cmath>
using namespace std;

struct Point 
{
    double x, y;

    Point(double argX = 0, double argY = 0);

    void print(void);
    double abs(void);
    double distance(Point arg);

};

struct Triangle 
{
    Point a, b, c;

    Triangle(void);
    Triangle(Point arg1, Point arg2, Point arg3);

    void print(void);
    double perimeter(void);
    double area(void);
};

int main(void) 
{

    const int size = 50;
    Triangle arr[size];

    for (int i = 0; i < size; i++) 
    {
        Point temp1(rand() % 10 + 1.0 * rand() / RAND_MAX, rand() % 10);
        Point temp2(rand() % 10, rand() % 10);
        Point temp3(rand() % 10, rand() % 10);

        arr[i].a = temp1;
        arr[i].b = temp2;
        arr[i].c = temp3;

        arr[0].print();
    }

    for (int i = 0; i < size; i++) 
    {
        cout << "\n *** ** *** " << endl;
        arr[i].print();
        cout << "Perimeter: " << arr[i].perimeter() << endl;
        cout << "Area: " << arr[i].area() << endl;
    }

    return 0;
}

Point::Point(double argX, double argY) 
{
    x = argX;
    y = argY;
}

void Point::print(void) 
{
    cout << "(" << x << "," << y << ")";
}

double Point::abs(void) 
{
    return(sqrt(x * x + y * y));
}

double Point::distance(Point arg) 
{
    return (sqrt((pow(arg.x - x, 2) + pow(arg.y - y, 2))));
}

Triangle::Triangle(void) 
{
    Point temp(0, 0);
    a = temp;
    b = temp;
    c = temp;
}


Triangle::Triangle(Point arg1, Point arg2, Point arg3) 
{
    a = arg1;
    b = arg2;
    c = arg3;
}

void Triangle::print(void) 
{
    a.print();
    cout << " , ";
    b.print();
    cout << " , ";
    c.print();
    cout << endl;
}

double Triangle::perimeter(void) 
{
    return a.distance(b) + b.distance(c) + c.distance(b);
}

double Triangle::area(void) 
{
    double s = perimeter() / 2.0;

    return sqrt(s * (s - a.distance(b)) * (s - a.distance(c)) * (s - c.distance(b)));
}