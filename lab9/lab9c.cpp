#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

struct Line {
    int slope, intercept;
    Line(int m, int b) : slope(b), intercept(b) {}

    double evaluate(double x);
};

int main(void) {
    srand(time(0));
    vector<Line> lines;
    int x_val = 5;

    for (int i = 0; i < 5; i++) {
        lines.push_back(Line(rand() % 20 - 10, rand() % 20 - 10));
    }

    for (int i = 0; i < lines.size(); i++) {
        cout << "Equation: y = " << lines[i].slope << "x " << (lines[i].intercept >= 0 ? "+ " : "- ") << abs(lines[i].intercept) << endl;
        cout << "when x = " << x_val << ", the y-value is " << lines[i].evaluate(x_val) << endl;
    }


    return 0;
}

double Line::evaluate(double x) {
    return x * slope + intercept;
}