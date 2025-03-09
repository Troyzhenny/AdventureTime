#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <memory>
#include <map>
#include "Header.h"

int main() {
    // Create Player dynamically using smart pointer
    std::unique_ptr<Player> player;

    std::string playerName;
    std::cout << "Enter your name: ";
    std::cin >> playerName;

    player = std::make_unique<Player>(playerName);
    std::cout << "Welcome, " << player->playerName << "!\n";

    // Define locations and descriptions
    std::map<std::string, std::string> locations;
    locations["forest"] = "A dark and creepy forest surrounds you.";
    locations["cabin"] = "An old wooden cabin stands here, its door slightly open.";

    // Display a location
    std::cout << "You are in the forest.\n" << locations["forest"] << "\n";

    // Show inventory
    player->showInventory();

    system("pause");
    return 0;
}
