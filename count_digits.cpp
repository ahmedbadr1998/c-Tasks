
#include <iostream>
#include <bitset>

int main() {
    int num = 42;
    
    // Print the binary representation of the integer directly
    std::cout << "Binary representation of " << num << ": " <<std::bitset< 8>(num)<< std::endl;

    return 0;
}

