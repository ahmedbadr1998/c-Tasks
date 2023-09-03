
#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3; // The number to delete
    int newSize = sizeof(arr) / sizeof(arr[0]) - 1; // Calculate the new size
    int newArr[newSize]; // Create a new array with the new size
    int newIndex = 0; // Index for the new array

    // Iterate through the original array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        // If the current element is not equal to the target, copy it to the new array
        if (arr[i] != target) {
            newArr[newIndex] = arr[i];
            ++newIndex;
        }
    }

    // Output the new array
    for (int i = 0; i < newSize; ++i) {
        std::cout << newArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

