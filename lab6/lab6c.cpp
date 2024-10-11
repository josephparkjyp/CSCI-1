#include <iostream>

int linearSearchMax(const int size, int a[]);
int linearSearchMin(const int size, int a[]);

int main(void) {

    srand(time(0));
    const int size = 20;
    int randomNumbers[size];
    char ans;

    do {

        std::cout << "Set of 20 random integers from 1-1000:" << std::endl;
        for (int i = 0; i < size; i++) {
            randomNumbers[i] = 1 + rand() % 1000;
            std::cout << randomNumbers[i] << "\t";

            if ((i + 1) % 5 == 0) {
                std::cout << "\n";
            }
        }

        std::cout << "\n";
        std::cout << "Max value: " << linearSearchMax(size, randomNumbers) << std::endl;
        std::cout << "Min value: " << linearSearchMin(size, randomNumbers) << std::endl;

        std::cout << "\n";
        std::cout << "Play again? (y/n): ";
        std::cin >> ans;

    } while (ans == 'y');
    
    return 0;
}

int linearSearchMax(const int size, int a[]) {
    int max = a[0];

    for (int i = 0; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int linearSearchMin(const int size, int a[]) {
    int min = a[0];

    for (int i = 0; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    return min;
}