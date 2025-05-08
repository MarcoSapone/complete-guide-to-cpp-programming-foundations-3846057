#include <iostream>

double divide(int a, int b){
    if(b == 0){
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return static_cast<double>(a) / b;
}

int main(){
    try{
        int x = 10, y = 0;
        double result = divide(x, y);
        std::cout << "Result: " << result << std::endl;
    }catch (const std::invalid_argument& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}