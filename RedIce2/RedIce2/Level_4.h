#pragma once
#include "Text.h"
#include "PlayerController.h"
#include "GameManager.h"
#include "Enemies.h"

//class GameManager;
class Shop;

class Level_4
{
	int Killers = 0;
	Shop& shop;  // ссылка должна быть инициализирована
	Enemies enemy;

private:
	Text Text;
public:
	Level_4(Shop& shopRef) : shop(shopRef), enemy(40) {}
	void StartLevel();
	void PreparationForSearch();
	void PreparationForSearch2();
	void Raid();
	void WaitRaid();

};
