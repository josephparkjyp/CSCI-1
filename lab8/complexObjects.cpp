// Structure Method Notes

#include <iostream>
#include <cmath>
using namespace std;

// Object Definition
struct Complex {

 // complex number a + bi
 double a, b;

 //methods
 void printComplex(void);
 double abs(void);
 Complex add(Complex arg);
 Complex subtract(Complex arg);
 Complex multiply(Complex arg);
 Complex divide(Complex arg);

};

int main(void) {

 Complex z;
 Complex w;

 z.a = 3;
 z.b = 4;
 w.a = 6;
 w.b = 8;

 z.printComplex();
 cout << "absolute value " << z.abs() << endl;
 w.printComplex();
 cout << "absolute value " << w.abs() << endl;

 Complex u = z.add(w);
 Complex v = z.subtract(w);
 Complex q = z.multiply(w);
 Complex r = z.divide(w);

 u.printComplex();
 v.printComplex();
 q.printComplex();
 r.printComplex();

 return(0);

}

//Function Implementations
// use the scope-resolution operator ( :: ) to tie the function to the object definition

void Complex::printComplex(void) {

 if (b >= 0)
 cout << a << " + " << b << "i" << endl;
 else
 cout << a << " - " << -1 * b << "i" << endl;
}

double Complex::abs(void) {
 return(sqrt(a * a + b * b));
}

Complex Complex::add(Complex arg) {
 Complex answer;
 answer.a = a + arg.a;
 answer.b = b + arg.b;
 return(answer);
}

Complex Complex::subtract(Complex arg) {
 Complex answer;
 answer.a = a - arg.a;
 answer.b = b - arg.b;

 return(answer);
}

Complex Complex::multiply(Complex arg) {

 Complex answer;
 answer.a = a * arg.a - b * arg.b;
 answer.b = a * arg.b + b * arg.a;

 return(answer);
}

Complex Complex::divide(Complex arg) {

    Complex answer;
    double denominator = arg.a * arg.a + arg.b * arg.b;
    double a_numerator = a * arg.a + b * arg.b;
    double b_numerator = b * arg.a - a * arg.b;
    answer.a = a_numerator / denominator;
    answer.b = b_numerator / denominator;

    return (answer);
}