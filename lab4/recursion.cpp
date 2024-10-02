#include<iostream>
using namespace std;

int fibonacci(int n);
int factorial(int n);

int main(void) {
    int n = 10;
    cout << fibonacci(n);
    return 0;
}

int factorial(int n) {

    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }


}

int fibonacci(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}