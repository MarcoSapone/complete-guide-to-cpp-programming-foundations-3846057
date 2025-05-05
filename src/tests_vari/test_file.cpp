
#include <iostream>
#include <string>

template <typename T>
int size_in_bits(T a) {
    return sizeof(a) *8;
}


int main(){

      std::cout << "The size in bit is:" << size_in_bits(21) << std::endl; // Integer
    std::cout << "The size in bit is:" << size_in_bits('f') << std::endl;  // Character
    std::cout << "The size in bit is:" << size_in_bits(32.1f) << std::endl; // Float
    std::cout << "The size in bit is:" << size_in_bits(32.1) << std::endl;  // Double
    std::cout << std::endl << std::endl;
    return 0;
}