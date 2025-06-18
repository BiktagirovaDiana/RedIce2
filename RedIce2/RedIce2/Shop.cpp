#include "Shop.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int Shop::Level = 1;

int Shop::PriceGun = 800;
int Shop::PriceCartridges = 500;
int Shop::PriceGrenade = 1500;
int Shop::PriceRPG = 2000;

//Урон
int Shop::DamageGun = 10;
int Shop::DamageGrenade = 20;
int Shop::DamageRPG = 30;


void Shop::InfoShop() {
	cout << "========Магазин=======" << endl;
	cout << "Патроны: " << endl;
	cout << "Цена: " << PriceCartridges << endl;

	if (Level >= 2)
	{
		cout << "Гранаты:" << endl;
		cout << "Количество: 3" << endl;
		cout << "Урон: " << DamageGrenade << endl;
		cout << "Цена: " << PriceGrenade << endl;
	}
	else {
		cout << "Гранаты доступны на 2 уровне" << endl;
	}
	if (Level >= 4)
	{
		cout << "РПГ:" << endl;
		cout << "Количество: 1 (заряжен на 2 выстрела)" << endl;
		cout << "Урон: " << DamageRPG << endl;
		cout << "Цена: " << PriceRPG << endl;
	}
	else {
		cout << "РПГ доступен на 4 уровне" << endl;
	}

}
void Shop::ChoiceBuy()
{
	cout << "Выберите что купить" << endl;
	cout << "1 - Патроны" << endl;
	cout << "2 - Гранаты" << endl;
	cout << "3 - РПГ" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
		BuyCartridges();
		break;
	case 2:
		BuyGrenade();
		break;
	case 3:
		BuyRPG();
		break;
	default:
		break;
	}

}
void Shop::BuyOrNot() {
	cout << "Приобрести дополнительное оружие?" << endl;
	cout << "1: Нет" << endl;
	cout << "2: Так уж и быть" << endl;

	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
		break;

	case 2:
		InfoShop();
		ChoiceBuy();
		break;
	default:
		break;
	}
}
void Shop::BuyCartridges() //Покупка патрон
{
	if (PlayerController::getMoney() >= PriceCartridges)
	{
		int a = PlayerController::getMoney();
		int b = a - PriceCartridges;
		PlayerController::setMoney(b);
		int c = PlayerController::getGun();
		int d = c += 5;
		PlayerController::setGun(d);
		cout << "Патроны: +5" << endl;
	}
	else {
		cout << "Недостаточно денег" << endl;
	}
}

void Shop::BuyGrenade() //Покупка гранат
{
	if (PlayerController::getMoney() >= PriceGrenade)
	{
		int a = PlayerController::getMoney();
		int b = a - PriceGrenade;
		PlayerController::setMoney(b);
		int c = PlayerController::getGrenade();
		int d = c += 3;
		PlayerController::setGrenade(d);
		cout << "Гранаты: +3" << endl;
		
	}
	else {
		cout << "Недостаточно денег" << endl;
	}
}
void Shop::BuyRPG() //Покупка РПГ
{
	if (PlayerController::getMoney() >= PriceRPG)
	{
		int a = PlayerController::getMoney();
		int b = a - PriceRPG;
		PlayerController::setMoney(b);
		int c = PlayerController::getRPG();
		int d = c += 2;
		PlayerController::setRPG(d);

		cout << "РПГ куплен" << endl;
	}
	else {
		cout << "Недостаточно денег" << endl;
	}
}