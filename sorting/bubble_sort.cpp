#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 3, 4, 6, 2, 5, 8, 7, 9, 11, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            for (int k = 0; k < size; k++) {
                cout << numbers[k] << " ";
            }
            cout << endl;
            }
        }
    }

    // Print sorted array=
    cout << "Sorted numbers: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
