#include <iostream>
#include <complex>
using namespace std;

int mandelbrotEscapeNumber(complex<double> c);
char mandelbrotEscapeChar(int i);

int main(void)
{
    char matrix[100][100];
    for (double row = -2; row < 2; row += 0.1) {
        for (double col = -2; col < 2; col += 0.05) {
            cout << mandelbrotEscapeChar(mandelbrotEscapeNumber({col, row}));
        }
        cout << "\n";
    }
 return(0);
}


//Function Implementation
int mandelbrotEscapeNumber(complex<double> c) {

 complex<double> z;
 int i = 0;

 do {

 z = z*z + c;
 i++;

 if (i >= 500)
 break;

 } while (abs(z) <= 2.0);

 return(i);

}

char mandelbrotEscapeChar(int i) {

 if (i<5)
 return(' ');
 if (i<10)
 return('.');
 if (i<50)
 return('&');
 if (i<100)
 return('.');
 if (i<150)
 return('=');

 return('+');

}