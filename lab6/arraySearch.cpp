#include <iostream>
#include <string>
using namespace std;

void randomLetterArrayGenerator(const int size, char arr[]);
int letterCounter(const int size, char arr[], char letter);

int main(void) {

    srand(time(0));
    const int size = 50;
    char random_alphabet[size];
    char letter, ans;

    cout << "Array of 50 randomly selected characters: " << endl;
    randomLetterArrayGenerator(size, random_alphabet);

    do {
        cout << (!ans ? "Curious how many time a particular character comes up in this array? Enter one to find out: (a-z): " : "Letter (a-z): ");
        cin >> letter;
        cout << "Count: " << letterCounter(size, random_alphabet, letter);
        cout << "\n Play again? (y/n): ";
        cin >> ans;
    } while (ans == 'y');
    
    return 0;
}

void randomLetterArrayGenerator(const int size, char arr[]) {
    
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < size; i++) {
        arr[i] = alphabet[rand() % 26];
        cout << i + 1 << ": " << arr[i] << "\t";

        if ((i+1) % 5 == 0) {
            cout << "\n";
        }
    }
}

int letterCounter(const int size, char arr[], char letter) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == letter) {
            count += 1;
        }
    }

    return count;
}