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
	static int DamageTrap;
	static int DamageGun;
	static int DamageGrenade;
	static int DamageRPG;

public:
	static int GetDamageTrap();
	static int GetGunDamage();
	static int GetGrenadeDamage();
	static int GetRPGDamage();

	static void InfoShop();
	static void ChoiceBuy();
	static void BuyOrNot();
	static void BuyCartridges();
	static void BuyGrenade();
	static void BuyRPG();
};