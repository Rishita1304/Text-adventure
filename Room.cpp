#include "Room.h"

// Initialize Room (Doodle)
Room::Room(string desc, vector<string> roomItems, map<string, string> roomConnections) {
    description = desc;
    items = roomItems;
    connections = roomConnections;
}

// Show room details (Doodle)
void Room::showDetails() {
    cout << description << endl;
    if (!items.empty()) {
        cout << "Items here: ";
        for (const string& item : items) {
            cout << item << " ";
        }
        cout << endl;
    } else {
        cout << "No items in this room. It's a little lonely here. Maybe you should keep looking?" << endl;
    }
}
