#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

// Defining the Player Squad
class Player {
public:
    string name; // Quark
    string location; // Quark
    vector<string> inventory; // Quark

    Player(string playerName, string startLocation);
    // Display the player's inventory (Doodle)
    void showInventory();
    // Add an item to inventory (Doodle)
    void pickUpItem(const string& item);
};

#endif
