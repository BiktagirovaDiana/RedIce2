#include "PlayerController.h"

int PlayerController::Influence = 60;
int PlayerController::HP = 100;
int PlayerController::Money = 5000;

int PlayerController::Gun = 5;
int PlayerController::Grenade = 0;
int PlayerController::RPG = 0;

void PlayerController::InfoPlayer() 
{

	cout << "���� ������� ����:" << endl;
	cout << "�������: " << Influence << endl;
	cout << "���� ������� (HP): " << HP << endl;
	cout << "�������: " << Money << endl;

	if (Gun > 0 || Grenade > 0)
	{
		cout << "���������: " << endl;
		if (Gun > 0) {
			cout << "��������: " << Gun << " ������(-�)" << endl;
		}
		if (Grenade > 0) {
			cout << "�������: " << Grenade << " ����" << endl;
		}
		if (RPG > 0) 
		{
			cout << "���: " << RPG << " �����" << endl;
		}
	}
	else {
		cout << "��������� ����" << endl;
	}
}
int PlayerController::getMoney() 
{
	return Money;
}