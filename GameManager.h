#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Player.h"
#include "Room.h"
#include <map>
#include <string>

using namespace std;

// Defining the GameManager Squad
class GameManager {
private:
    Player* player; // Quark
    map<string, Room*> rooms; // Quark

public:
    GameManager();
    // Initialize the game (Doodle)
    void initializeGame();
    // Run the main SpinCycle (game loop) (Doodle)
    void runGame();
    // Handle player movement (Doodle)
    void handleMove(const string& direction);
    // Handle picking up items (Doodle)
    void handlePickUp(const string& item);
};

#endif
