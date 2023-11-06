#pragma once
#include "Character.h"
#include "Enemy.h"

class Item {
public:
	Item();
	Item(short t);
	static short showPrice(short t);
	short getPrice();
	std::string getName();
	short getType();
	void setType(short val);
	short action(Character& user, Enemy& victim);
	void operator=(const Item& right); // Shift items with ease
private:
	static std::string nameBank[5];
	static short price[5];
	std::string name;
	short type; // Item type
};