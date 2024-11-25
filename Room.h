#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

// Defining the Room Squad
class Room {
public:
    string description; // Quark
    vector<string> items; // Quark
    map<string, string> connections; // Quark

    Room(string desc, vector<string> roomItems, map<string, string> roomConnections);
    // Show room details (Doodle)
    void showDetails();
};

#endif
