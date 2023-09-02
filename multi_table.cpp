
#include <iostream>
#include <iomanip>

int main() {
    int tableSize;

    std::cout << "Enter the size of the multiplication table: ";
    std::cin >> tableSize;

    // Print the column headers
    std::cout << "maulti Table";
    for (int i = 1; i <= tableSize; i++) {
        std::cout << std::setw(8) << i;
    }
    std::cout << "
----------------------------------
";

    // Print the multiplication table
    for (int i = 1; i <= tableSize; i++) {
        std::cout << std::setw(2) << i << " |";
        for (int j = 1; j <= tableSize; j++) {
            // std::cout << std::setw(4) << i * j;
            std::cout <<std::setw(4)<< j << " x " << i << " = " << (i * j) ;
        }
        std::cout << std::endl;
    }

    return 0;
}

