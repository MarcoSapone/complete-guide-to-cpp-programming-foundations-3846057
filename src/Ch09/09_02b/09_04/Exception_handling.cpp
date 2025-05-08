#include <iostream>
#include <fstream>
#include <string>

void loadSaveGame(const std::string& filename){
    std::ifstream file(filename);  //

    if(!file){
        throw std::runtime_error("Savegame file not found: " + filename);
    }

    // Load game data (simplified for this example)
    std::string data;
    while(std::getline(file, data)){
        std::cout << "Loaded data: " << data << std::endl;
    }
    file.close();
}

int main(){
    try{
        loadSaveGame("savegame.txt"); // Attempt to load a savegame file
    }catch (const std::runtime_error& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}