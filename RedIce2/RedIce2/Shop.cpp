#include "Shop.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

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
void Shop::BuyOrNor() {
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
	if (Money >= PriceCartridges)
	{
		Money -= PriceCartridges;
		Gun += 5;
		cout << "�������: +5" << endl;
	}
	else {
		cout << "������������ �����" << endl;
	}
}
void Shop::BuyGrenade() //������� ������
{
	if (Money >= PriceGrenade)
	{
		Money -= PriceGrenade;
		Grenade += 3;
		cout << "�������: +3" << endl;
	}
	else {
		cout << "������������ �����" << endl;
	}
}
void Shop::BuyRPG() //������� ���
{
	if (Money >= PriceRPG)
	{
		Money -= PriceRPG;
		RPG += 2;
		cout << "��� ������" << endl;
	}
	else {
		cout << "������������ �����" << endl;
	}
}