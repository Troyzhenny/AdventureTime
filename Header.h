#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <memory>
#include <map>

class Player {
public:
    std::string playerName;
    std::vector<std::string> inventory; // Stores player's inventory

    Player(std::string name) : playerName(name) {
        inventory = { "knife", "water bottle", "matches" };
    }

    void showInventory() {
        std::cout << "Your inventory: ";
        for (const auto& item : inventory) {
            std::cout << item << " ";
        }
        std::cout << "\n";
    }
};
