/*Containers are data structures that store collections of objects. The STL provides several types of containers that serve different purposes and are optimized for different scenarios. The most commonly used containers in the STL are:

Sequence containers: Store data in a linear sequence
Associative containers: Store data in key-value pairs, allowing for fast lookup, insertion, and deletion
Unordered containers: Provide similar functionality to associative containers but do not maintain any specific order of elements
Container adapters: While not technically containers, these modify the behavior of existing containers to provide a different interface
Each type of container has its own advantages and is suitable for different use cases. Understanding these distinctions will help you select the right container for your specific needs.*/

//Sequence Containers
//Vectors see section 4
// Deques: 
//A double-ended queue that allows fast insertion and deletion at both ends. It is useful when you need a container with efficient insertion and removal operations from both the front and back.
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

// LISTS
// A doubly linked list that allows fast insertion and deletion from anywhere in the list. It is suitable when frequent insertions and deletions are needed, but random access is not important.
//Example: Maintaining a list of checkpoints in a survival horror game
#include <iostream>
#include <list>

int main(){
    std::list<std::string> checkpoints = {"Entrance", "Lobby", "Storage Room"};
    checkpoints.push_back("Roof");

    for (const auto& checkpoint : checkpoints)
        std::cout << "Checkpoint: " << checkpoint << std::endl;
    return 0;
}

//SETS
//A sorted associative container that stores unique elements. It is useful when you need to maintain a collection of distinct elements and care about the order.
//Example: Tracking collected items in a sidescroller game
#include <iostream>
#include <set>

int main(){
    std::set<std::string> collectedItems = {"Coin", "Gem", "Star"};
    collectedItems.insert("Key"); // Insert a new unique item
    for (const auto& item : collectedItems)
        std::cout << "Collected: " << item << std::endl;
    return 0;
}

// std::pair class
//is a utility class in the STL that is used to store two heterogeneous objects as a single unit. It is not a container but rather a simple class template defined in the <utility> header. std::pair is commonly used with associative containers like std::map to represent key-value pairs. In essence, maps are sets or pairs.

//Example: Using std::pair to store player stats
#include <iostream>
#include <utility>  // Include the utility header for std::pair

int main(){
    // Create a pair to store player name and score
    std::pair<std::string, int> playerStats("Alice", 75);  
    std::cout << "Player: " << playerStats.first << ", Score: " << playerStats.second << std::endl;

    return 0;
}

//MAPS
//The term dictionary is popular in other programming languages, such as Python, to refer to a data structure that stores key-value pairs. The C++ Standard Template Library (STL) provides a similar data structure with std::map. 

//An std::map is an associative container that stores elements in key-value pairs, where each key is unique and associated with a specific value. So functionally, a map can be thought of as a set of pairs. This makes std::map a powerful tool for scenarios where fast lookups, insertions, and deletions based on keys are needed.

//Example: Storing player statistics in a sports game

#include <iostream>
#include <map>

int main(){
    std::map<std::string, int> playerStats;
    playerStats["Goals"] = 10;
    playerStats["Assists"] = 5;
    playerStats["Saves"] = 3;
    for (const auto& stat : playerStats)
        std::cout << stat.first << ": " << stat.second << std::endl;
    return 0;
}

//STACKS
//A LIFO (Last-In-First-Out) container adapter. It is useful for scenarios where you need to manage data in a stack-like structure. Like UNDO operations
//Example: Tracking game states in a sidescroller
#include <iostream>
#include <stack>

int main(){
    std::stack<std::string> gameStates;
    gameStates.push("Main Menu");
    gameStates.push("Level 1");
    gameStates.push("Level 2");

    while (!gameStates.empty()){
        std::cout << "Current State: " << gameStates.top() << std::endl;
        gameStates.pop();
    }
    return 0;
}

//QUEUES
//A first-in-first-out (FIFO) container adapter. It is suitable for situations where elements need to be processed in the order they were added.
//Example: Managing a queue of events in a sports simulation
#include <iostream>
#include <queue>

int main(){
    std::queue<std::string> eventQueue; // FIFO container for events
    eventQueue.push("Start Game"); //push function adds elements to the back of queue
    eventQueue.push("Goal Scored");
    eventQueue.push("Half-Time");

    while (!eventQueue.empty()){
        std::string currentEvent = eventQueue.front(); //the element at the front of the queue
        std::cout << "Processing Event: " << currentEvent << std::endl;
        eventQueue.pop();// remove the element at the front of the queue
    }
    return 0;
}

//PRIORITy QUEUES
//A container adapter that maintains a sorted order of its elements. It is useful when elements need to be processed based on priority.
//Example: Managing tasks in a game AI system
#include <iostream>
#include <queue>

int main(){
    std::priority_queue<int> aiTasks;
    aiTasks.push(1); // Low priority task
    aiTasks.push(3); // High priority task
    aiTasks.push(2); // Medium priority task

    while (!aiTasks.empty()){
        std::cout << "Processing task with priority: " << aiTasks.top() << std::endl;
        aiTasks.pop();
    }
    return 0;

