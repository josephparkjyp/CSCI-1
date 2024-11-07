#include <iostream>
#include <string>
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
        cipher += arg[i] + getN();
    }
    return cipher;
}

string rotN::decipher(string arg) {
    string decipher = "";
    for (int i = 0; i < arg.length(); i++) {
        decipher += arg[i] - getN();
    }
    return decipher;
}

int main(void) {

    rotN rot13(13);
    cout << rot13.cipher("This is a test") << endl;
    cout << rot13.decipher(rot13.cipher("This is a test")) << endl;

    return 0;
}