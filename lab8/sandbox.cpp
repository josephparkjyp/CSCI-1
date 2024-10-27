#include <iostream>
using namespace std;

int main(void) {

    struct x;
    x.testing = 5;

    cout << x.testing;

    return 0;
}