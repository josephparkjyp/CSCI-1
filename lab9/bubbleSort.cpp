#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int bubbleSort(int arg[], int size);

int main(void) {
    srand(time(0));
    const int size = 10;
    int arr[size];

    int counter = 0;
    int sum_swaps = 0;

    while (counter < 50000) {
        counter += 1;
            for (int i = 0; i < size; i++) {
            arr[i] = rand() % 51;
            //cout << arr[i] << "\t";
        }
        //cout << "\n";

        sum_swaps += bubbleSort(arr, size);

        // for (int i = 0; i < size; i++) {
        //     cout << arr[i] << "\t";
        // }
        // cout << "\n";
    }

    cout << sum_swaps / 50000.0;

    return 0;
}

int bubbleSort(int arg[], int size) {
    int first, second;
    int swaps = 0;
    int total_swaps = 0;
    do {
        swaps = 0;
        for (int i = 0; i < size - 1; i++) {
            first = arg[i];
            second = arg[i + 1];
            if (first > second) {
                arg[i] = second;
                arg[i + 1] = first;
                swaps += 1;
                total_swaps += 1;
            }
        }
    } while (swaps != 0);
    return total_swaps;
}