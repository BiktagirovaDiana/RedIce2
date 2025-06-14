#pragma once
#include "PlayerController.h"
class Shop : public PlayerController
{
private:
	int Level = 1;
	//Цены
	int PriceGun = 800;
	int PriceCartridges = 500;
	int PriceGrenade = 1500;
	int PriceRPG = 2000;

	//Урон
	int DamageGun = 10;
	int DamageGrenade = 20;
	int DamageRPG = 30;

	//PlayerController Player;

public:

	static void InfoShop();
	static void ChoiceBuy();
	static void BuyOrNor();
	static void BuyCartridges();
	static void BuyGrenade();
	static void BuyRPG();

};

