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
		Text::DefaultButton();
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
		Text::DefaultButton();
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
		Text::DefaultButton();
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
		Text::DefaultButton();
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
		Text::DefaultButton();
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
		//////////
	default:
		Text::DefaultButton();
		AttackPlane2();
		break;
	}

}
// нет case 2
void Level_5::TrapStrategy() //заманить в ловушку
{
	int choice;
	Text::Level5::TrapStrategy();
	cin >> choice;

	switch (choice)
	{
	case 1://использовать марго
		TrapMargo();
		break;
	case 2://встетится на нейтральной территории
		break;
	case 3://слежка за Чапо
		Surveillance();
		break;
	default:
		Text::DefaultButton();
		TrapStrategy();
		break;
	}
}
// нет case 1
void Level_5::TrapMargo() //использовать марго
{
	int choice;
	Text::Level5::TrapMargo();
	cin >> choice;
	switch (choice)
	{
	case 1: //убить марго и чапо
		break;

	case 2: //не убивать
		//лобовая атака
		shop.BuyOrNot();
		AttackStartegy();
		break;
	default:
		Text::DefaultButton();
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
		if (PlayerController::getRPG() >= 5)
		{
			PlayerController::setRPG(PlayerController::getRPG() - 5);
			enemy.takeDamage(100, 3);
			Text::Level5::WinSad();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	case 2:
		if (PlayerController::getGrenade() >= 10)
		{
			PlayerController::setGrenade(PlayerController::getGrenade() - 10);
			enemy.takeDamage(100, 2);
			Text::Level5::WinSad();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	case 3:
		if (PlayerController::getGun() >= 20)
		{
			PlayerController::setGun(PlayerController::getGun() - 20);
			enemy.takeDamage(100, 1);
			Text::Level5::WinSad();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	default:
		Text::DefaultButton();
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
		if (PlayerController::getRPG() >= 5)
		{
			PlayerController::setRPG(PlayerController::getRPG() - 5);
			enemy.takeDamage(100, 3);
			Text::Level5::WinShort();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	case 2:
		if (PlayerController::getGrenade() >= 10)
		{
			PlayerController::setGrenade(PlayerController::getGrenade() - 10);
			enemy.takeDamage(100, 2);
			Text::Level5::WinShort();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	case 3:
		if (PlayerController::getGun() >= 20)
		{
			PlayerController::setGun(PlayerController::getGun() - 20);
			enemy.takeDamage(100, 1);
			Text::Level5::WinShort();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	default:
		Text::DefaultButton();
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
		Text::DefaultButton();
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
		Text::DefaultButton();
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
	case 1: //защита
		ifDefense();
		break;
	case 2: //нападение
		Text::Level5::ifAttack();
		HowContiniue();
		break;
	default:
		Text::DefaultButton();
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
		enemy.takeDamage(20, 1);
		HowContiniue();
	}
	else
	{
		Text::BeforeLose();
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
			if (PlayerController::getGun() >= 8)
			{
				PlayerController::setGun(PlayerController::getGun() - 8);
				PlayerController::setHP(PlayerController::getHP() - 20);
				enemy.takeDamage(40, 1);
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
			if (PlayerController::getRPG() >= 2)
			{
				PlayerController::setRPG(PlayerController::getRPG() - 2);
				PlayerController::setHP(PlayerController::getHP() - 20);
				enemy.takeDamage(40, 3);
				RPGorGrenade();
			}
			else
			{
				Text::Level5::PoorPreparation();
				GameManager::Lose();
			}
			break;
		case 3:
			if (PlayerController::getGrenade() >= 4)
			{
				PlayerController::setGrenade(PlayerController::getGrenade() - 4);
				PlayerController::setHP(PlayerController::getHP() - 20);
				enemy.takeDamage(40, 2);
				RPGorGrenade();
			}
			else
			{
				Text::Level5::PoorPreparation();
				GameManager::Lose();
			}
			break;

		default:
			Text::DefaultButton();
			HowContiniue();
			break;
		}
	}
	else
	{
		Text::BeforeLose();
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
			enemy.takeDamage(15, 1);
			Text::Level5::NoRPG();
			GameManager::Lose();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	case 2:
		if (PlayerController::getGrenade() >= 3)
		{
			PlayerController::setGrenade(PlayerController::getGrenade() - 3);
			enemy.takeDamage(30, 2);
			Text::Level5::NoRPG();
			GameManager::Lose();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	case 3:
		if (PlayerController::getRPG() >= 2)
		{
			PlayerController::setRPG(PlayerController::getRPG() - 2);
			enemy.takeDamage(40, 3);
			PlayerController::setInfluence(PlayerController::getInfluence() + 100);
			PlayerController::setMoney(PlayerController::getMoney() + 1000);
			PlayerController::setHP(100);
			Text::Level5::WinFinal();
		}
		else
		{
			Text::BeforeLose();
			GameManager::Lose();
		}
		break;
	default:
		Text::DefaultButton();
		RPGorGrenade();
		break;
	}
}