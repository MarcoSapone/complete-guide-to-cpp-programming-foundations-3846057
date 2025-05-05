/*Containers are data structures that store collections of objects. The STL provides several types of containers that serve different purposes and are optimized for different scenarios. The most commonly used containers in the STL are:

Sequence containers: Store data in a linear sequence
Associative containers: Store data in key-value pairs, allowing for fast lookup, insertion, and deletion
Unordered containers: Provide similar functionality to associative containers but do not maintain any specific order of elements
Container adapters: While not technically containers, these modify the behavior of existing containers to provide a different interface
Each type of container has its own advantages and is suitable for different use cases. Understanding these distinctions will help you select the right container for your specific needs.*/

//Sequence Containers
//Vectors see section 4
// Deques: A double-ended queue that allows fast insertion and deletion at both ends. It is useful when you need a container with efficient insertion and removal operations from both the front and back.
//Example: Tracking recent player actions in a sports game

#include <iostream>
#include <deque>

int main(){
    std::deque<std::string> recentActions = {"Pass", "Shoot", "Defend"};
    recentActions.push_front("Dribble"); // Add action to the front
    recentActions.push_back("Score");    // Add action to the back

    for (const auto& action : recentActions)
        std::cout << "Action: " << action << std::endl;
    return 0;
}