
#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    bool found = false;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Found " << target << std::endl;
    } else {
        std::cout << target << " not found." << std::endl;
    }

    return 0;
}

