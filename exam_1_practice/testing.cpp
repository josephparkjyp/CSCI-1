#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
#include <chrono>    // For time delays
#include <thread>    // For sleep functionality

int diceRoll();

int main() {
    
    std::cout << diceRoll() << " and " << diceRoll();
    return 0;
}

int diceRoll() {
    srand(static_cast<unsigned int>(time(0)));  // Seed random number generator

    int die = 0;
    int roll_duration = 2000;  // Duration to simulate the roll (in milliseconds)
    int delay = 5;            // Initial delay between rolls (in milliseconds)

    std::cout << "Rolling the die..." << std::endl;

    for (int i = 0; i < roll_duration; i += delay) {
        die = rand() % 6 + 1;  // Generate random number between 1 and 6

        std::cout << "\r" << die << std::flush;  // Output number, overwrite previous output

        std::this_thread::sleep_for(std::chrono::milliseconds(delay));  // Delay between changes
        delay += 5;  // Gradually increase the delay to slow down the "rolling"
    }

    return die;
}