#pragma once
#include "PlayerController.h"
class Shop : public PlayerController
{
private:
	int Level = 1;
	//����
	int PriceGun = 800;
	int PriceCartridges = 500;
	int PriceGrenade = 1500;
	int PriceRPG = 2000;

	//����
	int DamageGun = 10;
	int DamageGrenade = 20;
	int DamageRPG = 30;

	//PlayerController Player;

public:

	void InfoShop();
	void ChoiceBuy();
	void BuyOrNor();
	void BuyCartridges();
	void BuyGrenade();
	void BuyRPG();

};

