#include <stdio.h>

// Function to sort an array using Bubble Sort
void sort(char array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(char array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c\n", array[i]);
    }
}

int main() {
    // int array[] = {9, 21, 33, 45, 57, 69, 81};

    char array[] = {'a', 'c', 'f', 'M', 'z', 'f'};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array, size);

    return 0;
}
