/*
	Mini-Project: Text-Based Adventure Game
	Now, put everything together by making a simple game using STL, File I/O, and smart pointers.

	+Features to Implement:

	- Use std::vector to store inventory.
	- Use std::map to store locations and descriptions.
	- Use std::string for player input.
	- Use std::fstream to save/load progress.
	- Use std::unique_ptr for the player object.
*/

#include <iostream>
#include <string>
#include <fstream> //memo: for FileIO
#include <vector>
#include <memory> //memo: for unique_ptr
#include <map>
#include "Header.h"



int main()
{
	std::string playerInput;
	std::string playerName;
	std::cout << "Enter your name: ";
	std::cin >> playerName;
	std::cout << "Welcome, " << playerName << std::endl;


	std::vector<int>playerInventory = {};



	std::map<std::string, int>locations;
	std::map<std::string, int>description;


	system("pause");
	return 0;
}