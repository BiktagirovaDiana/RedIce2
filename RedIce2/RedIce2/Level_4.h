#pragma once
#include "Text.h"
#include "PlayerController.h"
#include "GameManager.h"
#include "Shop.h"
#include "Enemies.h"

class Shop;

class Level_4
{
	int Killers = 0;
	Shop& shop;
	Enemies enemy;

private:
	Text Text;
public:
	Level_4(Shop& shopRef) : shop(shopRef), enemy(60) {}
	void StartLevel();
	void PreparationForSearch();
	void PreparationForSearch2();
	void Raid();
	void WaitRaid();
};
