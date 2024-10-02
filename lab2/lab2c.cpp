#include <iostream>
#include <string>
using namespace std;


int main(void) {

    string name;
    string major;
    string mathClass;
    string game;
    string computer;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your major: ";
    getline(cin, major);
    cout << "What is your current math class?: ";
    getline(cin, mathClass);
    cout << "What is your favorite game?: ";
    getline(cin, game);
    cout << "What is your home computer?: ";
    getline(cin, computer);
    cout << endl;

    cout << "My name is " << name << endl;
    cout << "My major is " << major << endl;
    cout << "My current or last math class is: " << mathClass << endl;
    cout << endl;

    cout << "My favorite Game/App: " << game << endl;
    cout << "My Home computer is a: " << computer << endl;

    return 0;
}