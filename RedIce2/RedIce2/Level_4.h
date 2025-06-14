#pragma once
#include "Text.h"
//#include "GameManager.h"
#include <iostream>

class GameManager;
class Shop;

class Level_4
{
public:
	void StartLevel();
	void PreparationForSearch();
	void PreparationForSearch2();
	void Raid();
	void WaitRaid();
private:
	Text Text;
	//GameManager GameManager;
};

