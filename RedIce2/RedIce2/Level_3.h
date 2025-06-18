#pragma once
#include "Text.h"
#include "PlayerController.h"
#include "GameManager.h"
#include "Shop.h"
#include "Enemies.h"

class Shop;

class Level_3
{
private:
	Shop& shop;
	Enemies enemy;
public:
	Level_3(Shop& shopRef) : shop(shopRef), enemy(40) {}

	void StartLevel();
	void Meeting();
	void NoMeeting();
	void Shooting();
	void Spy();
	void CleverSpy();
	void Laboratory();
	void KidnapScientists();
};

