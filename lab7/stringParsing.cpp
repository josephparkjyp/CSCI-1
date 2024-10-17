#include <iostream>
#include <string>
using namespace std;

string lastNameFirst(string name[]);

int main(void) {
    string userName[3], name;
    int j = 0;

    cout << "Enter your full name (First Middle Last): ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++) {
        if (name[i] != ' ') {
            userName[j] += tolower(name[i]);
        } else {
            j += 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        userName[i][0] = toupper(userName[i][0]);
    }

    cout << "First name: " << userName[0] << endl;
    cout << "Middle name: " << userName[1] << endl;
    cout << "Last name: " << userName[2] << endl << endl;
    cout << "Your name is: " << lastNameFirst(userName) << endl;
    cout << "---" << endl;
    return 0;
}

string lastNameFirst(string name[]) {
    return name[2] + ", " + name[0] + " " + name[1][0] + ".";
}