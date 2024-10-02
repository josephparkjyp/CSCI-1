#include <iostream>
using namespace std;

// Function Prototypes.
void singleGuessGame(void);
int randomNumber(int max = 100);
void guessGame(void);
void binarySearch(int x, int y);
int continueGame(void);
void gameController(void);

int main(void) {
    gameController();
    return 0;
}

// For assignment: allow user a single try to guess the randomly generated number.
void singleGuessGame(void) {
    cout << "\nSINGLE GUESS GAME" << endl;
    cout << "This program will generate a random integer, and you have ONE TRY to guess it." << endl;

    int x, y;
    x = randomNumber();
    cout << "Your guess: ";
    cin >> y;

    if (y >= x) {
        if (y == x) {
            cout << "You got it!";
        } else {
            cout << "Too high";
        }
    } else {
        cout << "Too low";
    }

    cout << "\nThe number was: " << x;
}

// Generate a random number between 0 and `max`.
int randomNumber(int max) {
    srand(time(NULL));
    return 1 + rand() % max; 
}

// To have fun, use this function; you will have unlimited tries to guess the randomly generated number.
void guessGame(void) {
    cout << "\nCONTINUOUS GUESS GAME" << endl;
    cout << "This program will generate a random integer, and you have unlimited tries to guess it." << endl;

    int counter, status, x, y;
    x = randomNumber();

    counter = 0;
    status = 1;

    while (status == 1) {
        
        cout << "Guess " << counter + 1 << ": ";
        cin >> y;

        binarySearch(x, y);
        counter += 1;

        if (x == y) {
            cout << "Yes, the number is " << x << endl;
            cout << "Number of guesses: " << counter;
            status = 0;
        }
    }
}

// Function to help user determine if their guess is too high or too low.
void binarySearch(int x, int y) {
    if (y < x) {
        cout << "Too low";
    } else if (y > x) {
        cout << "Too high";
    }
    cout << endl;
}

// Takes user input and returns either 0 or 1 to the game controller.
int continueGame(void) {
    string answer;
    cout << "\nPlay another game? (y/n): ";
    cin >> answer;

    if (answer == "y" || answer == "Y") {
        return 1;
    } else if (answer == "n" || answer == "N") {
        return 0;
    }
    return 0;
}

// User chooses which game to play (single guess vs. continuous guess game).
void gameController(void) {
    cout << "\nNUMBER GUESSING GAME" << endl;
    cout << "Which game would you like to play?" << endl;
    cout << "Single Guess Game (1)\tContinuous Guess Game (2)" << endl;
    cout << "Please enter 1 or 2: ";
    int game;
    cin >> game;

    int status = 1;

    while (status == 1) {
        if (game == 1) {
        singleGuessGame();
    } else if (game == 2) {
        guessGame();
    }

    status = continueGame();
    }
    
}