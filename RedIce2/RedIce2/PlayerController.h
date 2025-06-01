#pragma once

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class PlayerController
{
protected:
	static int Influence;
	static int HP;
	static int Money;

	static int Gun;
	static int Grenade;
	static int RPG;
public:
	void InfoPlayer();

	int getMoney();
};

