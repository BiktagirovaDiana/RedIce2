include "Shop.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int Shop::Level = 1;

int Shop::PriceGun = 800;
int Shop::PriceCartridges = 500;
int Shop::PriceGrenade = 1500;
int Shop::PriceRPG = 2000;

//����
int Shop::DamageTrap = 20;
int Shop::DamageGun = 5;
int Shop::DamageGrenade = 10;
int Shop::DamageRPG = 20;

int Shop::GetDamageTrap() { return DamageTrap; }
int Shop::GetGunDamage() { return DamageGun; }
int Shop::GetGrenadeDamage() { return DamageGrenade; }
int Shop::GetRPGDamage() { return DamageRPG; }


void Shop::InfoShop() {
	cout << "========�������=======" << endl;
	cout << "�������: " << endl;
	cout << "����: " << PriceCartridges << endl;

	if (Level >= 2)
	{
		cout << "�������:" << endl;
		cout << "����������: 3" << endl;
		cout << "����: " << DamageGrenade << endl;
		cout << "����: " << PriceGrenade << endl;
	}
	else {
		cout << "������� �������� �� 2 ������" << endl;
	}
	if (Level >= 4)
	{
		cout << "���:" << endl;
		cout << "����������: 1 (������� �� 2 ��������)" << endl;
		cout << "����: " << DamageRPG << endl;
		cout << "����: " << PriceRPG << endl;
	}
	else {
		cout << "��� �������� �� 4 ������" << endl;
	}

}
void Shop::ChoiceBuy()
{
	cout << "�������� ��� ������" << endl;
	cout << "1 - �������" << endl;
	cout << "2 - �������" << endl;
	cout << "3 - ���" << endl;
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
	cout << "���������� �������������� ������?" << endl;
	cout << "1: ���" << endl;
	cout << "2: ��� �� � ����" << endl;

	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
		break;

	case 2:
		InfoShop();
		ChoiceBuy();

	default:
		break;
	}
}
void Shop::BuyCartridges() //������� ������
{
	if (PlayerController::getMoney() >= PriceCartridges)
	{
		int a = PlayerController::getMoney();
		int b = a - PriceCartridges;
		PlayerController::setMoney(b);
		int c = PlayerController::getGun();
		int d = c += 8;
		PlayerController::setMoney(d);
		cout << "�������: +8" << endl;
	}
	else {
		cout << "������������ �����" << endl;
	}
}

void Shop::BuyGrenade() //������� ������
{
	if (PlayerController::getMoney() >= PriceGrenade)
	{
		int a = PlayerController::getMoney();
		int b = a - PriceGrenade;
		PlayerController::setMoney(b);
		int c = PlayerController::getGrenade();
		int d = c += 4;
		PlayerController::setMoney(d);
		cout << "�������: +4" << endl;

	}
	else {
		cout << "������������ �����" << endl;
	}
}
void Shop::BuyRPG() //������� ���
{
	if (PlayerController::getMoney() >= PriceRPG)
	{
		int a = PlayerController::getMoney();
		int b = a - PriceRPG;
		PlayerController::setMoney(b);
		int c = PlayerController::getRPG();
		int d = c += 3;

		cout << "���: +3" << endl;
	}
	else {
		cout << "������������ �����" << endl;
	}
}