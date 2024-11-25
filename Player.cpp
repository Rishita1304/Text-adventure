#include "Player.h"

// Initialize Player (Doodle)
Player::Player(string playerName, string startLocation) {
    name = playerName;
    location = startLocation;
}

// Display the player's inventory (Doodle)
void Player::showInventory() {
    if (inventory.empty()) {
        cout << "Your inventory is as empty as your future... but don't worry, you'll find something!" << endl;
    } else {
        cout << "Your inventory: ";
        for (const string& item : inventory) {
            cout << item << " ";
        }
        cout << endl;
    }
}

// Add an item to inventory (Doodle)
void Player::pickUpItem(const string& item) {
    inventory.push_back(item);
    cout << "You picked up: " << item << " — well, that's one step closer to your goal!" << endl;
}
