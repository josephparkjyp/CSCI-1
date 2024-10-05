#include <iostream>
using namespace std;

int dieRoll(void);

int main(void) {
    srand(time(0));

    int total = 0, die1, die2, die3, n = 1000000;

    for (int i = 0; i < n; i++) {
        die1 = dieRoll();
        die2 = dieRoll();
        die3 = dieRoll();

        if (die1 + die2 + die3 == 3) {
            total += 1;
        }
    }

    cout << "Total number of rolls: " << n << endl;
    cout << "Total number of Cyclopses: " << total << endl;
    cout << "Probability: " << (1.0 * total / n) * 100 << "%" << endl;

    return 0;
}

int dieRoll(void) {
    return (1 + rand() % 6);
}