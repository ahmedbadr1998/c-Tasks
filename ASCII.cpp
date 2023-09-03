
#include <iostream>

int main() {
    for (int i = 0; i < 16; i++) { // Initialize i to 0
        std::cout << "*";
    }
    std::cout << std::endl; // Add a newline character at the end
    std::cout << "char  |  ASCII" << std::endl;
    for (int i = 0; i < 16; i++) { // Initialize i to 0
        std::cout << "*";
    }
    std::cout << std::endl; // Add a newline character at the end
    
    for(unsigned char i=0;i<255;i++)
    {
        std::cout << i<<"	   "<<static_cast<int>(i) << std::endl;
    }
    std::cout << 255<<"	   "<<static_cast<int>(255) << std::endl;
    return 0;
}




