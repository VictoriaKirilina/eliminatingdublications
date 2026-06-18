#include <iostream>


int power(int value, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= value;
    }
    return result;
}

int main(int argc, char** argv) {

    std::cout << "5 в степени 2 = " << power(5, 2) << std::endl;
    
   
    std::cout << "3 в степени 3 = " << power(3, 3) << std::endl;
    
   
    std::cout << "4 в степени 4 = " << power(4, 4) << std::endl;
    
    return 0;
}