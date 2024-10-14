#include <iostream>
using namespace std;

int main(void) {

    const int row = 10;
    const int col = 10;
    int multiplcationTable[row][col];

    // Column Headers
    cout << "x\t";
    for (int i = 0; i < row; i++) {
        cout << i + 1 << "\t";
    }
    cout << "\n";

    for (int i = 0; i < row; i++) {
        // Row Headers
        cout << i + 1 << "\t";
        
        for (int j = 0; j < col; j++) {
            multiplcationTable[i][j] = (i + 1) * (j + 1);
            cout << multiplcationTable[i][j] << "\t";
        }
        cout << "\n";
    }


    return 0;
}