#pragma once
#include "Text.h"
#include <iostream>

class GameManager;
class Shop;

class Level_5
{
private:
	int Killers = 0;
	Shop& shop; 
	Enemies enemy;
public:
	Level_5(Shop& shopRef) : shop(shopRef), enemy(100) {}
	void StartLevel();
	void Metting();
	void AttackChapo();
	void Friend();
	void Trap();
	void AttackPlane();
};
