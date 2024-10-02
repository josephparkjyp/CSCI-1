#include <iostream>
using namespace std;

int main(void) {
    int x, y, z;
    double ans;

    cout << "Enter an integer: ";
    cin >> x;

    cout << "Enter an integer: ";
    cin >> y;

    cout << "Enter an integer: ";
    cin >> z;

    cout << endl;

    ans = (x + y + z) / 3.0;

    cout << "You typed in " << x << ", " << y << ", " << z << "." << endl;
    cout << "The average is: (" << x << " + " << y << " + " << z << ") / 3 = " << ans;

    return 0;
}