#include <iostream>

using namespace std;

int linearSearch(int target, int numbers[], size_t size) {
    for(int i = 0; i < size; i++) {
        if(target == numbers[i]) return i;
    }

    return -1;
}

void swap(int numbers[], int a, int b) {
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

void bubbleSort(int numbers[], int size) {
    for(int pass = 0; pass < size; pass++) {
        for (int i = 1; i < size; i++)
            if (numbers[i] < numbers[i - 1])
                swap(numbers, i, i - 1);
    }
}

const int rows = 2;
const int columns = 3;

void printMatrix(int numbers[rows][columns]) {
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            cout << numbers[i][j] << endl;
}

int main() {
    int numbers[rows][columns] = {
            {11, 12, 13},
            {21, 22, 23}
    };

    printMatrix(numbers);

    return 0;
}
