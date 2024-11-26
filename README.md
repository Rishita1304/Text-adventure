# KN-Lang Text Adventure Game

## Overview

Welcome to the **KN-Lang Text Adventure Game**, a whimsical console-based game that brings the charm of modular programming to life! This project showcases the magic of **KN-Lang**, the unofficial programming language born from creativity and caffeine.

In this adventure, you’ll explore strange lands, solve quirky puzzles, and interact with rooms full of personality. The game is built using **Squads** (classes), **Doodles** (functions), and **Quarks** (variables) while operating on a smooth **SpinCycle** (game loop).

So, grab your imaginary sword, and let’s dive into the code and the adventure!

---

## Features

- **Text Adventure Game**: Explore rooms, solve puzzles, collect items, and unlock the treasure.
- **KN-Lang Modularity**: 
  - **Squads**: Organize functionality into the `Player`, `Room`, and `GameManager` classes.
  - **Doodles**: Modular functions handle actions like movement, inventory management, and item interactions.
  - **Quarks**: Variables like `name`, `location`, and `inventory` are tiny but mighty!
- **Humor**: The game responds with witty and humorous messages for invalid actions or special situations.
- **Inventory System**: Pick up items to solve puzzles and progress.
- **Exit Option**: Quit the game at any time with a friendly farewell.

---

## Installation

### Prerequisites

You’ll need a working C++ compiler to run the code. Here’s how you can set it up:

1. **Windows**: Install **MinGW** or use **Visual Studio**.
2. **Mac**: Use **Xcode** or **clang++** (pre-installed on most systems).
3. **Linux**: Use the `g++` compiler, usually pre-installed. If not, install it using:
   ```bash
   sudo apt install g++

---

## Setup
### Clone or Download the Project:
- Download the following files:
  - `Player.h`, `Player.cpp`
  - `Room.h`, `Room.cpp`
  - `GameManager.h`, `GameManager.cpp`
  - `main.cpp`
 
- Clone the repository:  
 
   ```bash
   git clone https://github.com/Rishita1304/Text-adventure.git
   cd Text-adventure

### Compile the Project:
1. Open a terminal and navigate to the project directory.
2. Compile all files with this command:
   
   ```bash
   g++ main.cpp Player.cpp Room.cpp GameManager.cpp -o text_adventure

---

## How to Run

After compiling, run the game using these instructions:

### On Windows:
    text_adventure.exe

### On Mac/Linux:
    ./text_adventure
The game will launch, and your adventure begins!

---

## Code Structure

### Squads (Classes)
**Player**: Manages the player’s attributes, including name, location, and inventory.
**Room**: Represents the rooms the player can explore, including items and connections to other rooms.
**GameManager**: Handles game logic, including initialization, input processing, and the game loop (SpinCycle).

### Doodles (Functions)

- **Player Squad**:
  
  - *showInventory()*: Displays the items in the player’s inventory.
    
  - *pickUpItem(item)*: Adds an item to the inventory.
    
- **Room Squad**:
  
  - *showDetails()*: Displays room descriptions, items, and connections.
    
    
- **GameManager Squad**:
  
  - *initializeGame()*: Sets up the player, rooms, and connections.
    
  - *runGame()*: Executes the main SpinCycle (game loop).
    
  - *handleMove(direction)*: Moves the player between rooms.
    
  - *handlePickUp(item)*: Allows the player to pick up items.
    

  ---

    
## Sample Input and Output

Here’s what your journey might look like:


### Starting the Game
    Welcome to the Text Adventure Game! It’s like an RPG, but with more snacks!
    You are in a cozy starting room with a single door. The air smells of adventure... or maybe it’s just the pizza you had earlier.
    Items here: key
    What will you do? (Commands: go [direction], pick up [item], inventory, exit)
    
### Picking Up an Item
Player Command:

    pick up key
  
Output:

    You picked up: key — well, that’s one step closer to your goal!
    
### Moving to Another Room
Player Command:

    go north
    
Output:

    You SpinCycle your way north.
    A dimly lit hallway with a locked door at the end.
    What will you do? (Commands: go [direction], pick up [item], inventory, exit)
    
### Invalid Command
Player Command:

    open door
    
Output:

    The game chuckles: 'Invalid command! Try something smarter... or just type 'go north' if you're unsure.'

---

## License
This project is open source and available under the MIT License.




## Summary
This text adventure game is designed to give you a fun and whimsical experience while learning the basics of modular programming using KN-Lang. The game allows players to interact with rooms, collect items, and solve puzzles, all while using Quarks, Doodles, and Squads to manage the game state. It is implemented in C++ with a unique blend of humor and structure that mirrors the quirky nature of KN-Lang.

Feel free to explore the code and contribute improvements or new features!



