#pragma once

#include <iostream>
#include <string>
#include <fstream> //memo: for FileIO
#include <vector>
#include <memory> //memo: for unique_ptr
#include <map>

class Player {
public:
	Player() { std::cout << "some string about player" << std::endl; }
	~Player() { std::cout << "Player destroyed!" << std::endl; };
};