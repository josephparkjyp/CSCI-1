#include <iostream>
#include <iomanip>
using namespace std;

int rollDice();

int main(void) {
    srand(time(0));
    const int size = 12;
    int sumCount[size] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int sum, rolls = 50000;

    for (int i = 0; i < rolls; i++) {
        sum = rollDice() + rollDice();
        sumCount[sum]++;
    }

    cout <<"\n\nRolling two dice, what is the probability of rolling a certian sum? We will simulate the probability by rolling two dice 50,000 times and finding the frequency of each sum.";
    cout << "\n\nPossible sums: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12";
    for (int i = 2; i <= size; i++) {
        cout << "\n\na[" << i << "]: " << sumCount[i];
        cout << "\nProbability: " << fixed << setprecision(2) << (1.0 * sumCount[i] / rolls) * 100 << "%";
    }




    return 0;
}

int rollDice() {
    return 1 + rand() % 6;
}