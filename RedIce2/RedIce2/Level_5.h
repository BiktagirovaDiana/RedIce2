#pragma once
#include "Text.h"
#include "PlayerController.h"
#include "GameManager.h"
#include "Enemies.h"
#include "Shop.h"

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
	void AttackPlane2();
	void TrapStrategy();
	void TrapMargo();
	void DeathMargo();
	void Surveillance();
	void AttackStartegy();
	void AttackStartegy2();
	void AttackStartegy3();
	void ifDefense();
	void HowContiniue();
	void RPGorGrenade();
};
