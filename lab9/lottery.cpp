#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void printVector(vector<int> arg);
void shuffleVector(vector<int>& arg);
void swap(int& arg1, int& arg2);

int main(void) {
    srand(time(0));
    vector<int> winning_ticket;
    vector<int> user_digits;
    vector<int> matching_digits;
    string input;
    int money = 0;
    char response;

    do {

        // Restart game.
        winning_ticket.resize(0);
        user_digits.resize(0);
        matching_digits.resize(0);
        money = 0;

        for (int i = 0; i < 10; i++) {
                winning_ticket.push_back(i);
            }

        shuffleVector(winning_ticket);
        winning_ticket.resize(5);

        cout << "\n\n";
        cout << "LOTTERY GAME: The winning ticket will consist of 5 winning digits from 0 to 9 with no repeats.\n";
        cout << "You will be able to choose 3 lucky digits. You will win $5 per digit matched.\n";
        cout << "Pick 3 lucky digits (e.g. \"1 2 3\"): ";
        
        getline(cin, input);

        for (int i = 0; i < input.length(); i++) {
            if (input[i] != ' ') {
                user_digits.push_back(input[i] - 48);
            }
        }

        cout << "\n";
        cout << "Your lucky digits: ";
        printVector(user_digits);
        cout << "Winning numbers: ";
        printVector(winning_ticket);

        for (int i = 0; i < user_digits.size(); i++) {
            for (int j = 0; j < winning_ticket.size(); j++) {
                if (user_digits[i] == winning_ticket[j]) {
                    matching_digits.push_back(user_digits[i]);
                    money += 5;
                }
            }
        }

        cout << "MATCHES: ";
        printVector(matching_digits);
        cout << "Your prize money: $" << money << endl;

        cout << (money != 0 ? "Grats! " : "Ouch. ") << "Play again? (y/n): ";
        cin >> response;
        cin.ignore();

        
    } while (response == 'y');

    return 0;
}

void printVector(vector<int> arg) {
    for (int i = 0; i < arg.size(); i++) {
        cout << arg[i] << " ";
    }
    cout << endl;
}

void shuffleVector(vector<int>& arg) {
    int temp;
    for (int i = 0; i < arg.size(); i++) {
        int j = rand() % arg.size();
        swap(arg[i], arg[j]);
    }
}

void swap(int& arg1, int& arg2) {
    int temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}