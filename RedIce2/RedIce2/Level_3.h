#pragma once
#include "Text.h"
#include "PlayerController.h"
#include "GameManager.h"
#include "Enemies.h"
#include "Shop.h"

class Shop;

class Level_3
{
private:
	Shop& shop;
	Enemies enemy;
public:
	Level_3(Shop& shopRef) : shop(shopRef), enemy(30) {}

	void StartLevel();
	void Meeting();
	void NoMeeting();
	void Shooting();
	void Spy();
	void CleverSpy();
	void Laboratory();
	void KidnapScientists();
};