#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

class Dog {
    private:
        string name;
        int age;
        string breed;
        int ID;
    public:
        // Constructor
        Dog(void);
        Dog(string name, int age, string breed, int ID);
        // Set Methods
        void setName(string name);
        void setAge(int age);
        void setBreed(string breed);
        void setID(int ID);
        // Get Methods
        string getName(void);
        int getAge(void);
        string getBreed(void);
        int getID(void);
        // Other Methods
        void printInfo(void);
        int humanAge(void);
};

void printAllDogs(vector<Dog> arg);

int main(void) {
    srand(time(0));
    vector<Dog> dogs(100);
    string names[] = {"Fido", "Molly", "Spot", "Boots", "Harvey"};
    string breeds[] = {"Beagle", "Shepherd", "Retriever", "Chihuahua", "Mix"};

    for (int i = 0; i < 100; i++) {
        dogs.push_back(Dog(names[rand() % 5],    1 + rand() % 20,     breeds[rand() % 5], 10000 + i));
    }

    printAllDogs(dogs);

    return 0;
}

void printAllDogs(vector<Dog> arg) {
    for (int i = 0; i < arg.size(); i++) {
        arg[i].printInfo();
        cout << "\n";
    }
}

Dog::Dog(void) {
    setName("Blank");
    setAge(99999);
    setBreed("Blank");
    setID(99999);
}

Dog::Dog(string name, int age, string breed, int ID) {
    setName(name);
    setAge(age);
    setBreed(breed);
    setID(ID);
}

void Dog::setName(string arg) {
    name = arg;
}

void Dog::setAge(int arg) {
    if (arg > 0) {
        age = arg;
    } else {
        age = arg * -1;
    }
}

void Dog::setBreed(string arg) {
    breed = arg;
}

void Dog::setID(int arg) {
    if (arg >= 10000 && arg <= 99999) {
        ID = arg;
    } else { 
        do {
            cout << "Please enter a valid ID (5-digit integer w/ no leading zeroes): " << endl;
            cin >> arg;
        } while (arg < 10000 || arg > 99999);
        ID = arg;
    }
}

string Dog::getName(void) {
    return name;
}

int Dog::getAge(void) {
    return age; 
}

string Dog::getBreed(void) {
    return breed;
}

int Dog::getID(void) {
    return ID;
}

void Dog::printInfo(void) {
    cout << "Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Breed: " << getBreed() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Human Age: " << humanAge() << endl;
}

int Dog::humanAge(void) {
    return 7 * getAge();
}