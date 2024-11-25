#include "GameManager.h"
#include <iostream>
#include <algorithm>

using namespace std;

// Initialize Game (Doodle)
GameManager::GameManager() {
    initializeGame();
}

// Setup rooms (Doodle)
void GameManager::initializeGame() {
    rooms["Start"] = new Room(
        "You are in a cozy starting room with a single door. The air smells of adventure... or maybe it's just the pizza you had earlier.",
        {"key"},
        {{"north", "Hallway"}}
    );

    rooms["Hallway"] = new Room(
        "A dimly lit hallway with a locked door at the end. It feels like you're walking in circles, but don't worry this is your destiny.",
        {},
        {{"south", "Start"}, {"north", "Treasure Room"}}
    );

    rooms["Treasure Room"] = new Room(
        "A shiny treasure room! You've won! Or did you? The real treasure was the friends you made along the way... Just kidding, it's gold!",
        {},
        {{"south", "Hallway"}}
    );

    // Setup player (Squad action)
    player = new Player("Adventurer", "Start");
}

// SpinCycle (main game loop) (Doodle)
void GameManager::runGame() {
    cout << "Welcome to the Text Adventure Game! It's like an RPG, but with more snacks!" << endl;

    while (true) {
        Room* currentRoom = rooms[player->location];
        currentRoom->showDetails();

        cout << "What will you do? (Commands: go [direction], pick up [item], inventory, exit)" << endl;
        string command;
        getline(cin, command);

        if (command == "exit") {
            cout << "The game bids you farewell! Goodbye, brave adventurer! Come back soon, we miss you already." << endl;
            break; // Exit the SpinCycle
        } else if (command.substr(0, 3) == "go ") {
            string direction = command.substr(3);
            handleMove(direction);
        } else if (command.substr(0, 8) == "pick up ") {
            string item = command.substr(8);
            handlePickUp(item);
        } else if (command == "inventory") {
            player->showInventory();
        } else {
            cout << "The game chuckles: 'Invalid command! Try something smarter... or just type 'go north' if you're unsure.'" << endl;
        }
    }
}

// Handle player movement (Doodle)
void GameManager::handleMove(const string& direction) {
    Room* currentRoom = rooms[player->location];
    if (currentRoom->connections.find(direction) != currentRoom->connections.end()) {
        string newLocation = currentRoom->connections[direction];
        if (newLocation == "Treasure Room" &&
            find(player->inventory.begin(), player->inventory.end(), "key") == player->inventory.end()) {
            cout << "The door mocks you silently. Maybe it's missing something? A key perhaps? Hmm..." << endl;
        } else {
            player->location = newLocation;
            cout << "You SpinCycle your way " << direction << ". Onward to the unknown!" << endl;
        }
    } else {
        cout << "You can't go that way! Even the door looks disappointed." << endl;
    }
}

// Handle picking up items (Doodle)
void GameManager::handlePickUp(const string& item) {
    Room* currentRoom = rooms[player->location];
    auto it = find(currentRoom->items.begin(), currentRoom->items.end(), item);
    if (it != currentRoom->items.end()) {
        player->pickUpItem(item);
        currentRoom->items.erase(it);
    } else {
        cout << "There's no " << item << " here. Did you check under the rug? Maybe you missed it!" << endl;
    }
}
