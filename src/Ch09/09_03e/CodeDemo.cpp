// Complete Guide to C++ Programming Foundations
// Exercise 09_03
// Opening a Text File for Writing, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ofstream outFile;  //ofstream class used for writing into files
    float a = 4.333f, b = 5.302f;

    outFile.open("calculations.txt");
    if (outFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else{ //write into the file 
        outFile << "a = " << a << std::endl; //insertion operator << takes care of writing and converting floats into strings
        outFile << "b = " << b << std::endl;
        outFile << "a + b = " << a + b << std::endl;
        outFile << "a * b = " << a * b << std::endl;
        outFile.close();
        std::cout << "File written successfully!" << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
