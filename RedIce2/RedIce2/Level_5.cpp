#include "Level_5.h"

#include "GameManager.h"
#include "Shop.h"

using std::cout;
using std::cin;
using std::endl;

void Level_5::StartLevel()
{
	int choice;
	Text::Level5::HelloPablo5();
	cin >> choice;
	switch (choice)
	{
	case 1:
		Metting();
	case 2:
		AttackChapo();
	default:
		cout << "������������ ����!" << endl;
		StartLevel();
		break;
	}
}
void Level_5::Metting()
{
	int choice;
	Text::Level5::Meeting();
	cin >> choice;
	switch (choice)
	{
	case 1:
		GameManager::Lose();
	case 2:
		AttackChapo();
	default:
		cout << "������������ ����!" << endl;
		Metting();
		break;
	}

}
void Level_5::AttackChapo()
{
	int choice;
	Text::Level5::AttackChapo();
	cin >> choice;
	switch (choice)
	{
	case 1:
		Friend();
	case 2:
		Trap();
	case 3:
		AttackPlane();
	default:
		cout << "������������ ����!" << endl;
		AttackChapo();
		break;
	}
}

void Level_5::Friend()
{
	int choice;
	Text::Level5::Friend();
	cin >> choice;
	switch (choice)
	{
	case 1:
		AttackPlane();
	case 2:
		AttackPlane();
	case 3:
		AttackChapo();
	default:
		Friend();
		cout << "������������ ����!" << endl;
		break;
	}
}
void Level_5::Trap()
{
	Text::Level5::Trap();
	AttackChapo();
}
void Level_5::AttackPlane()
{
	if (PlayerController::getMoney() < 1500)
	{
		cout << "� ��� ������������ �����" << endl;
		GameManager::Lose();
	}
	int choice;
	Text::Level5::AttackPlane();
	cin >> choice;
	switch (choice)
	{
	case 1:
		PlayerController::setMoney(0);
		AttackPlane2();
	case 2:
		PlayerController::setMoney(PlayerController::getMoney() - 1500);
		AttackPlane2();
	default:
		AttackPlane();
		cout << "������������ ����!" << endl;
		break;
	}
}
void Level_5::AttackPlane2() 
{
	int choice;
	Text::Level5::AttackPlane2();
	cin >> choice;
	switch (choice)
	{
	case 1:
		TrapStrategy();
	case 2:
	default:
		cout << "������������ ����!" << endl;
		AttackPlane2();
		break;
	}

}
void Level_5::TrapStrategy() //�������� � �������
{
	int choice;
	Text::Level5::TrapStrategy();
	cin >> choice;
	switch (choice)
	{
	case 1://������������ �����
		TrapMargo();
	case 2://��������� �� ����������� ����������

	case 3://������ �� ����

	default:
		cout << "������������ ����!" << endl;
		TrapStrategy();
		break;
	}
}
void Level_5::TrapMargo() //������������ �����
{
	int choice;
	Text::Level5::TrapMargo();
	cin >> choice;
	switch (choice)
	{
	case 1: //����� ����� � ����

	case 2: //�� �������
		//������� �����
	default:
		cout << "������������ ����!" << endl;
		TrapMargo();
		break;
	}
}
void Level_5::DeathMargo()
{
	int choice;
	Text::Level5::DeathMargo();
	cin >> choice;
	switch (choice)
	{
	case 1:
		if (PlayerController::getRPG() >= 1) 
		{
			PlayerController::setRPG(PlayerController::getRPG() - 1);
			Text::Level5::WinSad();
		}
		else {

		}
	case 2:
		if (PlayerController::getGrenade() >= 3) 
		{
			PlayerController::setGrenade(PlayerController::getRPG() - 1);
			Text::Level5::WinSad();
		}
		else {

		}
	case 3:
		if (PlayerController::getGun() >= 10) 
		{
			PlayerController::setGun(PlayerController::getGun() - 10);
			Text::Level5::WinSad();
		}
		else {

		}
	default:
		cout << "������������ ����!" << endl;
		DeathMargo();
		break;
	}
}
