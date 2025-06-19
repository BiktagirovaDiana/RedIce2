#pragma once
#include "Text.h"
//#include "GameManager.h"
#include <iostream>

class GameManager;
class Shop;

class Level_4
{
	Shop shop;
	Enemies enemy;

private:
	Text Text;
public:
	Level_4() : enemy(40) {}
	void StartLevel();
	void PreparationForSearch();
	void PreparationForSearch2();
	void Raid();
	void WaitRaid();

};
