// In this lab exercise you will declare a vector of strings named userStrings.

// vector<string> userStrings; 
// 1. Allow the user to populate the vector at run time. Do not set a size, use the push back method.

// 2. Implement a regular function that prints the strings to the screen using the following prototype:

// void printStrings(vector<string> arg);
// 3. Implement a regular function that returns a random string from the vector using the following prototype:

// string randomString(vector<string> arg);

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void printStrings(vector<string> arg);
string randomString(vector<string> arg);

int main(void) {
    srand(time(0));
    vector<string> userStrings;

    return 0;
}

void printStrings(vector<string> arg) {
    for (int i = 0; i < arg.size(); i++) {
        cout << arg[i] << endl;
    }
}

string randomString(vector<string> arg) {
    int random_index = rand() % arg.size();
    return arg[random_index];
}