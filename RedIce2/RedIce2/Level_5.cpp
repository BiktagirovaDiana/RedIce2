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
		break;
	case 2:
		AttackChapo();
		break;
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
		break;
	case 2:
		AttackChapo();
		break;
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
		break;
	case 2:
		Trap();
		break;
	case 3:
		AttackPlane();
		break;
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
		break;
	case 2:
		AttackPlane();
		break;
	case 3:
		AttackChapo();
		break;
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
		break;
	case 2:
		PlayerController::setMoney(PlayerController::getMoney() - 1500);
		AttackPlane2();
		break;

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
		break;
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
		break;
	case 2://��������� �� ����������� ����������
		break;
	case 3://������ �� ����
		Surveillance();
		break;
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
		break;

	case 2: //�� �������
		//������� �����
		shop.BuyOrNot();
		AttackStartegy();
		break;
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
			GameManager::Lose();
		}
		break;
	case 2:
		if (PlayerController::getGrenade() >= 3) 
		{
			PlayerController::setGrenade(PlayerController::getGrenade() - 3);
			Text::Level5::WinSad();
		}
		else {
			GameManager::Lose();
		}
		break;
	case 3:
		if (PlayerController::getGun() >= 10) 
		{
			PlayerController::setGun(PlayerController::getGun() - 10);
			Text::Level5::WinSad();
		}
		else {
			GameManager::Lose();
		}
		break;
	default:
		cout << "������������ ����!" << endl;
		DeathMargo();
		break;
	}
}
void Level_5::Surveillance() 
{
	int choice;
	Text::Level5::Surveillance();
	cin >> choice;
	switch (choice)
	{
	case 1:
		if (PlayerController::getRPG() >= 1)
		{
			PlayerController::setRPG(PlayerController::getRPG() - 1);
			Text::Level5::WinShort();
		}
		else {
			GameManager::Lose();
		}
		break;
	case 2:
		if (PlayerController::getGrenade() >= 3) {
			PlayerController::setGrenade(PlayerController::getGrenade() - 3);
			Text::Level5::WinShort();
		}
		else 
		{
			GameManager::Lose();
		}
		break;
	case 3:
		if (PlayerController::getGun() >= 10) {
			PlayerController::setGun(PlayerController::getGun() - 10);
			Text::Level5::WinShort();
		}
		else 
		{
			GameManager::Lose();
		}
		break;
	default:
		cout << "������������ ����!" << endl;
		Surveillance();
		break;
	}
}

void Level_5::AttackStartegy()
{
	int choice;
	Text::Level5::AttackStartegy();
	cin >> choice;
	switch (choice)
	{
	case 1:
		AttackStartegy2();
		break;
	case 2:
		AttackStartegy2();
		break;
	default:
		cout << "������������ ����!" << endl;
		AttackStartegy();
		break;
	}
	
}
void Level_5::AttackStartegy2() 
{
	int choice;
	Text::Level5::AttackStartegy2();
	cin >> choice;
	switch (choice)
	{
	case 1:
		AttackStartegy3();
		break;
	case 2:
		AttackStartegy3();
		break;
	default:
		cout << "������������ ����!" << endl;
		AttackStartegy2();
		break;
	}
	
}
void Level_5::AttackStartegy3() 
{
	int choice;
	Text::Level5::AttackStartegy3();
	cin >> choice;
	switch (choice)
	{
	case 1: //������
		ifDefense();
		break;
	case 2: //���������
		Text::Level5::ifAttack();
		HowContiniue();
		break;
	default:
		cout << "������������ ����!" << endl;
		AttackStartegy3();
		break;
	}
}

void Level_5::ifDefense() 
{
	if (PlayerController::getGun() >= 4) 
	{
		Text::Level5::ifDefense();
		PlayerController::setGun(PlayerController::getGun() - 4);
		PlayerController::setHP(PlayerController::getHP() - 20);
		enemy =- 20;
		HowContiniue();
	}
	else 
	{
		cout << "� ��� ��� ������, �� �� ������ ����������" << endl;
		GameManager::Lose();
	}
	
}
void Level_5::HowContiniue() 
{
	if (PlayerController::getHP() > 0) 
	{
		int choice;
		Text::Level5::HowContiniue();
		cin >> choice;
		switch (choice)
		{
		case 1:
			if (PlayerController::getGun() >= 4) 
			{
				PlayerController::setGun(PlayerController::getGun() - 4);
				PlayerController::setHP(PlayerController::getHP() - 20);
				enemy =- 40;
				Text::Level5::ifPatrons();
				GameManager::Lose();
			}
			else 
			{
				Text::Level5::PoorPreparation();
				GameManager::Lose();
			}
			break;
		case 2:
			if (PlayerController::getRPG() >= 1) 
			{
				PlayerController::setRPG(PlayerController::getRPG() - 1);
				PlayerController::setHP(PlayerController::getHP() - 20);
				enemy = -40;
				RPGorGrenade();
			}
			else
			{
				Text::Level5::PoorPreparation();
				GameManager::Lose();
			}
			break;
		case 3:
			if (PlayerController::getGrenade() >= 2) {
				PlayerController::setGrenade(PlayerController::getGrenade() - 2);
				PlayerController::setHP(PlayerController::getHP() - 20);
				enemy = -40;
				RPGorGrenade();
			}
			else
			{
				Text::Level5::PoorPreparation();
				GameManager::Lose();
			}
			break;

		default:
			cout << "������������ ����!" << endl;
			HowContiniue();
			break;
		}
	}
	else 
	{
		cout << "�� �������" << endl;
		GameManager::Lose();
	}
}
void Level_5::RPGorGrenade() 
{
	int choice;
	Text::Level5::RPGorGrenade();
	cin >> choice;
	switch (choice)
	{
	case 1:
		if (PlayerController::getGun() >= 3)
		{
			PlayerController::setGun(PlayerController::getGun() - 3);
			Text::Level5::NoRPG();
			GameManager::Lose();
		}
		else
		{
			PlayerController::setHP(PlayerController::getHP() - 80);
		}
		break;
	case 2:
		if (PlayerController::getGrenade() >= 3)
		{
			PlayerController::setGrenade(PlayerController::getGrenade() - 3);
			Text::Level5::NoRPG();
			GameManager::Lose();
		}
		else 
		{
			PlayerController::setHP(PlayerController::getHP() - 80);
		}
		break;
	case 3:
		if (PlayerController::getRPG() >= 2)
		{
			PlayerController::setRPG(PlayerController::getRPG() - 2);
			PlayerController::setInfluence(PlayerController::getInfluence() + 100);
			PlayerController::setMoney(PlayerController::getMoney() + 1000);
			PlayerController::setHP(100);
			Text::Level5::WinFinal();
		}
		else 
		{
			PlayerController::setHP(PlayerController::getHP() - 80);
		}
		break;
	default:
		cout << "������������ ����!" << endl;
		RPGorGrenade();
		break;
	}
	if (PlayerController::getHP() <= 0)
	{
		Text::Level5::PoorPreparation();
		GameManager::Lose();
	}

}