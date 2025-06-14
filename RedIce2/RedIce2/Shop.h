#pragma once
#include "PlayerController.h"

class PlayerController;
class Shop
{
private:
	static int Level;
	//Цены
	static int PriceGun;
	static int PriceCartridges;
	static int PriceGrenade;
	static int PriceRPG;

	//Урон
	static int DamageGun;
	static int DamageGrenade;
	static int DamageRPG;

	//PlayerController Player;

public:

	static void InfoShop();
	static void ChoiceBuy();
	static void BuyOrNor();
	static void BuyCartridges();
	static void BuyGrenade();
	static void BuyRPG();

};

