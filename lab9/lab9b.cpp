#include <iostream>
#include <vector>
#include <string>
using namespace std;

int searchVector(vector<string> vecArg, string target);

int main(void) {
    vector<string> randomStrings = {
        "Matthew", "Mark", "Luke", "John", "Acts", "Romans", "1 Corinthians", "2 Corinthians", "Galatians", "Ephesians"
    };

    cout << endl;
    for (int i = 0; i < randomStrings.size(); i++) {
        cout << i + 1 << ": " << randomStrings[i] << endl;
    }

    string target;
    char res;

    do {
        cout << endl;
        cout << "What string do you want to search for? (Remember that C++ is case sensitive)" << endl;
        cout << "Your string: ";
        getline(cin, target);

        int index = searchVector(randomStrings, target);
        if (index >= 0) {
            cout << endl << "Your string is at index " << index << endl;
        } else {
            cout << endl << "Your string is not here :(" << endl;
        }

        cout << endl << "Search same vector with a different string? (y/n): ";
        cin >> res;
        cin.ignore();
    } while (res == 'y');



    return 0;
}

int searchVector(vector<string> vecArg, string target) {
    for (int i = 0; i < vecArg.size(); i++) {
        if (vecArg[i] == target) {
            return i;
        }
    }
    return -1;
}