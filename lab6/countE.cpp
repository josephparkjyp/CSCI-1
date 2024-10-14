#include <iostream>
#include <string>
using namespace std;

int letterCounter(char letter, string str);

int main(void) {

    cout <<"\n\nThis program will take any string and return the number of e's in it.\n";

    while (true) {
        cout <<"\nEnter your string: ";
        string str;
        getline(cin, str);

        int count = letterCounter('e', str);
        cout << "Your string, " << str << ", has " << count << " e" << (count != 1 ? "'s" : "") << " in it.";

        cout << "\n\nTry a different string? (y/n): ";
        char cont;
        cin >> cont;

        if (cont == 'n' || cont == 'N') {
            break;
        } else {
            cin.ignore();
        }
    }
    return 0;
}

int letterCounter(char letter, string str) {
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (tolower(str[i]) == letter) {
            count += 1;
        }
    }

    return count;
}