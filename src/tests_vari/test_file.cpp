
#include <iostream>
#include <cstdint>

template <typename T>
int size_in_bits(T a) {
    return sizeof(a) *8;
}


int main(){

      std::cout << "The size in bit is:" << size_in_bits(21) << std::endl;
    std::cout << "The size in bit is:" << size_in_bits('f') << std::endl;
    std::cout << "The size in bit is:" << size_in_bits(32.1f) << std::endl;
    std::cout << "The size in bit is:" << size_in_bits(32.1) << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}