/*EXAMPLE
Handling an array-index-out-of-bounds exception.
Handling array access errors is another use case for exception handling, especially in scenarios where an invalid index could crash the program:
*/
#include <iostream>
#include <vector>
//The getScore function checks if the provided index is valid for the scores vector
int getScore(const std::vector<int>& scores, int index){
    if(index < 0 || index >= scores.size()){   // || or operator
        throw std::out_of_range("Index is out of bounds."); 
    }
    return scores[index];
}

int main(){
    std::vector<int> highScores = {100, 200, 300, 400, 500};

    try{
        int score = getScore(highScores, 10); // Invalid index
        std::cout << "Score: " << score << std::endl;
    }catch (const std::out_of_range& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}