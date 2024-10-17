#include <iostream>
using namespace std;

int findA(char arr[], int size, char letter);

int main(void) {
    srand(time(0));
    const int size = 11;
    char charArray[size];
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char myChar;
    int index;
    char ans;

    for (int i = 0; i < size - 1; i++) {
        charArray[i] = alphabet[rand() % 26];
    }

    cout << charArray << endl;

    do {
        cout << "What char do you want to linear search for: ";
        cin >> myChar;
        index = findA(charArray, size, myChar);
        if (index == -1) {
            cout << myChar << " was not found in the string." << endl;
        } else {
            cout << "Index of the first " << myChar << " in this string above: " << findA(charArray, size, myChar) << endl;
        }
        
        cout << "Try a different char? (y/n): ";
        cin >> ans;

        if (ans == 'n') {
            break;
        }
    } while (true);
    
    return 0;
}

int findA(char arr[], int size, char letter) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == letter) {
            return i;
        }
    }
    return -1;
}