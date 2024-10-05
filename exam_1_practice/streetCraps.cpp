#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <string>
using namespace std;

int rollDie(void);
int animateDoubleDiceRoll();
int winCondition(int sum);

int main(void) {
    srand(time(0));

    cout << "\n\nSTREET CRAPS! This is a dice rolling game. You win if the sum of two dice is 7 or 11. You lose if the sum is 2, 3, or 12." << endl;
    string response;
    do {
        cout << "\nType \"ROLL\" to roll! (type \"quit\" to quit): ";
        getline(cin, response);
        cout << "\n";
    } while (response != "ROLL" && response != "quit");

    if (response == "quit") {
        return 0;
    }

    int sum, winner, playerScore = 0, houseScore = 0;
    
    do {
        do {
            sum = animateDoubleDiceRoll();
            cout << "\nTotal: " << sum << endl << endl;
            winner = winCondition(sum);
        } while (!winner);

        if (winner == 1) {
            playerScore += 1;
        } else if (winner == 2) {
            houseScore += 1;
        }

        cout << "\nSCOREBOARD" << endl;
        cout << "You: " << playerScore << "\tMe: " << houseScore << endl;
        cout << "\nPlay again? (y/n): ";
        getline(cin, response);
        cout << "\n";
    } while (response == "y");
    
    return 0;
}

int rollDie(void) {
    return rand() % 6 + 1;
}

int animateDoubleDiceRoll() {
    int duration = 15;
    int firstRoll, secondRoll;

    for (int i = 0; i < duration; i += 1) {
        firstRoll = rollDie();
        secondRoll = rollDie();

        cout << "\rRolling: " << firstRoll << " & " << secondRoll;
        this_thread::sleep_for(100ms);
    }

    return firstRoll + secondRoll;
}

int winCondition(int sum) {
    if (sum == 7 || sum == 11) {
        cout << "You win!" << endl;
        return 1;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        cout << "You lose!" << endl;
        return 2;
    } else {
        return 0;
    }
}