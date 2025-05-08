// Complete Guide to C++ Programming Foundations
// Exercise 09_02
// Opening a Text File for Reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    inFile.open("players.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);   //get the first line of the file
            std::cout << str << ", ";
            getline(inFile, str);
            number = stoi(str);    // get the second line and return an intergers from a string
            std::cout << number << ", ";
            getline(inFile, str);
            letter = str[0];  // get the third line and  get the first letter of the string
            std::cout << letter << std::endl;
        }
        inFile.close();
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
