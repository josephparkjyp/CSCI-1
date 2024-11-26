#include <string>
#include <iostream>
using namespace std;

int sentenceCounter(string arg);

int main(void) {

    string input;
    cout << "Enter your essay: \n\n";
    getline(cin, input);
    cout << "\n";
    cout << "Number of sentences: " << sentenceCounter(input);

    return 0;
}

int sentenceCounter(string arg) {
    int total = 0;
    for (int i = 0; i < arg.length(); i++) {
        if (arg[i] == '.') {
            total += 1;
        }
    }
    return total;
}