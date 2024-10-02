#include<iostream>
#include<string>
using namespace std;

int main(void) {
    
    bool playGame = true;

    while (playGame) {
        cout << "How many integers would you like to add?: ";
        int numbers;
        cin >> numbers;

        cout << "Choose an integer to start from: ";
        int startingInt;
        cin >> startingInt;

        string sentence = "";
        int sum = 0;
        for (int i = startingInt; i <= startingInt + numbers - 1; i++) {
            sentence = sentence + to_string(i) + (i == startingInt + numbers - 1 ? " = " : " + ");
            sum += i;
        }
        
        cout << sentence << sum << endl;

        cout << "Play again? (y/n): ";
        string ans;
        cin.ignore();
        getline(cin, ans);

        // Game Loop Mechanism
        if (ans == "n" || ans == "N") playGame = false;
    }
    
    return 0;
}