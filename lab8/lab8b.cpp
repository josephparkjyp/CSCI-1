#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {

    string firstName, lastName, school;
    double GPA;

};

void printStudent(Student arg);
void capitalize(Student& arg);

int main(void) {

    Student myStudent;
    const int size = 3;
    Student students[size];

    cout << "\n\nCreate 3 instances of the `Student` object.\n\n";

    for (int i = 0; i < size; i++) {
        cout << "First Name: ";
        getline(cin, students[i].firstName);
        cout << "Last Name: ";
        getline(cin, students[i].lastName);
        cout << "School: ";
        getline(cin, students[i].school);
        cout << "GPA: ";
        cin >> students[i].GPA;
        cin.ignore();
        cout << "\n";
    }

    for (int i = 0; i < size; i++) {
        cout << "Student #" << i + 1 << endl;
        capitalize(students[i]);
        printStudent(students[i]);
        cout << "\n";
    }

    return 0;
}

void printStudent(Student arg) {
    cout << "Name: " << arg.firstName << " " << arg.lastName << endl;
    cout << "School: " << arg.school << endl;
    cout << "GPA: " << fixed << setprecision(2) << arg.GPA << endl;
}

void capitalize(Student& arg) {
    // The address of the student object needs to be passed because we want to change the referenced value instead of a copy of it.
    arg.firstName[0] = toupper(arg.firstName[0]);
    arg.lastName[0] = toupper(arg.lastName[0]);
    arg.school[0] = toupper(arg.school[0]);
}