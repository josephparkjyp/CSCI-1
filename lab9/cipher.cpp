#include <iostream>
#include <cstring>
using namespace std;

class rotN {
    private:
        int n;
    public:
        rotN();
        rotN(int arg);
        void setN(int arg);
        int getN();
        string cipher(string arg);
        string decipher(string arg);
};

rotN::rotN() {
    setN(0);
}

rotN::rotN(int arg) {
    setN(arg);
}

void rotN::setN(int arg) {
    n = arg;
}

int rotN::getN() {
    return n;
}

string rotN::cipher(string arg) {
    string cipher = "";
    for (int i = 0; i < arg.length(); i++) {
        if (arg[i] == ' ') {
            cipher += ' ';
            continue;
        }
        cipher += tolower(arg[i] + getN() - (arg[i] + getN() > 122 ? 25 : 0));
    }
    return cipher;
}

string rotN::decipher(string arg) {
    string decipher = "";
    for (int i = 0; i < arg.length(); i++) {
        if (arg[i] == ' ') {
            decipher += ' ';
            continue;
        }
        decipher += tolower(arg[i] - getN() + (arg[i] + getN() < 97 ? 25 : 0));
    }
    return decipher;
}

int main(void) {

    rotN rot13(13);
    cout << rot13.cipher("This is a test") << endl;
    cout << rot13.decipher(rot13.cipher("This is a test")) << endl;

    return 0;
}