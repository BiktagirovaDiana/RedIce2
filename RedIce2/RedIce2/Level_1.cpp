#include "Level_1.h"

void Level_1::StartLevel()
{
	int choice = 0;
	PlayerController::InfoPlayer();
	Text::Level1::HelloPablo1();
	cin >> choice;

	switch (choice)
	{
	case 1:
		DestroyEnemy();
		break;
	case 2:
		Negotiations();
		break;
	}
}

// атака или откуп
void Level_1::DestroyEnemy()
{
	int choice = 0;
	Text::Level1::Strategy1();
	cin >> choice;

	switch (choice)
	{
	case 1:
		shop.BuyOrNor();
		PlayerController::InfoPlayer();
		PeopleDesert();
		break;
	case 2:
		shop.BuyOrNor();
		PlayerController::InfoPlayer();
		EnemysLair();
		break;
	case 3:
		Text::Level1::Nothing();
		DestroyEnemy();
		break;
	default:
		break;
	}
}

void Level_1::Negotiations()
{
	int choice = 0;
	Text::Level1::Negotations();
	cin >> choice;

	switch (choice)
	{
	case 1:
		Text::Level1::WinNegotations1();
		PlayerController::setInfluence(PlayerController::getInfluence() - 15);
		PlayerController::setMoney(PlayerController::getMoney() - 2000);
		break;
	case 2:
		Text::Level1::WinNegotations2();
		PlayerController::setInfluence(PlayerController::getInfluence() - 10);
		PlayerController::setMoney(PlayerController::getMoney() - 1000);
		break;
	case 3:
		Text::Level1::LoseNegotations();
		GameManager::Lose();
		break;
	default:
		break;
	}

}

// в пустыне
void Level_1::PeopleDesert()
{
	int choice = 0;
	Text::Level1::PeopleDesert();
	cin >> choice;

	switch (choice)
	{
	case 1:
		Killers = 2;
		PlayerController::setMoney(PlayerController::getMoney() - 700);
		PlayerController::InfoPlayer();
		break;
	case 2:
		Killers = 2;
		PlayerController::setMoney(PlayerController::getMoney() - 750);
		PlayerController::InfoPlayer();
		break;
	case 3:
		Killers = 4;
		PlayerController::setMoney(PlayerController::getMoney() - 1100);
		PlayerController::InfoPlayer();
		break;
	case 4:
		Killers = 4;
		PlayerController::setMoney(PlayerController::getMoney() - 1500);
		PlayerController::InfoPlayer();
		break;
	default:
		break;
	}
}

void Level_1::StrategyDesert()
{
	int choice = 0;
	Text::Level1::StrategyDesert();
	cin >> choice;

	switch (choice)
	{
	case 1:
		Text::Level1::DesertAttak();
		enemy.takeDamage(20);
		PlayerController::setGun(PlayerController::getGun() - 3);
		PlayerController::InfoPlayer();
		break;
	case 2:
		Text::Level1::DesertDefense();
		enemy.takeDamage(20);
		PlayerController::setGun(PlayerController::getGun() - 4);
		PlayerController::setHP(PlayerController::getHP() + 20);
		PlayerController::InfoPlayer();
		break;
	default:
		break;
	}
}

void Level_1::LoseOrWin()
{
	if (Killers == 4)
	{
		Text::Level1::Survive();
		Text::Level1::Win1();
		enemy.takeDamage(20);
		PlayerController::setGun(PlayerController::getGun() - 2);
		PlayerController::setMoney(PlayerController::getMoney() + 1000);
		PlayerController::setInfluence(PlayerController::getInfluence() + 10);
		PlayerController::setHP(PlayerController::getHP() + 20);
		PlayerController::InfoPlayer();
	}
	else
	{
		Text::Level1::Death1();
		GameManager::Lose();
	}
}

// в логове врага
void Level_1::EnemysLair()
{
	int choice = 0;
	Text::Level1::PeopleLair();
	cin >> choice;

	switch (choice)
	{
	case 1:
		Killers = 2;
		PlayerController::setMoney(PlayerController::getMoney() - 700);
		PlayerController::InfoPlayer();
		break;
	case 2:
		Killers = 3;
		PlayerController::setMoney(PlayerController::getMoney() - 900);
		PlayerController::InfoPlayer();
		break;
	case 3:
		Killers = 4;
		PlayerController::setMoney(PlayerController::getMoney() - 1200);
		PlayerController::InfoPlayer();
		break;
	default:
		break;
	}
}

void Level_1::StrategyLair()
{
	int choice = 0;

	Text::Level1::AttakLair();
	enemy.takeDamage(10);
	PlayerController::setGun(PlayerController::getGun() - 2);
	PlayerController::setHP(PlayerController::getHP() - 15);

	cin >> choice;

	switch (choice)
	{
	case 1:
		shop.BuyOrNor();
		PeopleDesert();
		break;
	case 2:
		Text::Level1::Win2();
		PlayerController::setInfluence(PlayerController::getInfluence() - 15);
		if (PlayerController::setMoney(PlayerController::getMoney()) > 3000)
		{
			PlayerController::setMoney(PlayerController::getMoney() - 3000);
			PlayerController::InfoPlayer();
		}
		else
		{
			GameManager::Lose();
		}
		break;
	default:
		break;
	}
}

