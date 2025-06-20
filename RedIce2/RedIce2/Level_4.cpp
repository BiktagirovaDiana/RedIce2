#include "Level_4.h"
#include "GameManager.h"
#include "Shop.h"

using std::cout;
using std::cin;
using std::endl;

void Level_4::StartLevel()
{
	int choice = 0;
	Text::Level4::HelloPablo4();
	cin >> choice;

	switch (choice)
	{
	case 1:
		PreparationForSearch();
		break;
	case 2:
		Text::Level4::BuyOff();
		GameManager::Lose();
		break;
	case 3:
		Raid();
		break;
	default:
		Text::DefaultButton();
		StartLevel();
		break;
	}
}

void Level_4::PreparationForSearch()
{
	int choice = 0;
	Text::Level4::Peaceful();
	cin >> choice;
	switch (choice)
	{
	case 1:
		PreparationForSearch2();
		break;
	case 2:
		GameManager::Lose();
		break;
	default:
		Text::DefaultButton();
		PreparationForSearch();
		break;
	}
}

void Level_4::PreparationForSearch2()
{
	int choice = 0;
	Text::Level4::Peaceful2();
	cin >> choice;
	Text::Level4::WinPolice();
}

void Level_4::Raid()
{
	int choice = 0;
	Text::Level4::AttackPolice();
	cin >> choice;
	switch (choice)
	{
	case 1:
		Text::Level4::Warning();
		if (PlayerController::getGrenade() < 6 || PlayerController::getRPG() < 3)
		{
			shop.BuyOrNot();

			if (PlayerController::getGrenade() < 6 || PlayerController::getRPG() < 3)
			{
				Text::BeforeLose();
				GameManager::Lose();
			}
		}

		Text::Level4::Trap();
		cin >> choice;

		switch (choice)
		{
		case 1:
			if (PlayerController::getRPG() >= 3)
			{
				PlayerController::setRPG(PlayerController::getRPG() - 3);
				enemy.takeDamage(3, 3);
				Text::Level4::PoliceWin();
				GameManager::Lose();
			}
			else
			{
				Text::BeforeLose();
				GameManager::Lose();
			}
		case 2:
			if (PlayerController::getGrenade() >= 6)
			{
				PlayerController::setGrenade(PlayerController::getGrenade() - 6);
				enemy.takeDamage(6, 6);
				Text::Level4::PoliceWin();
				GameManager::Lose();
			}
			else
			{
				Text::BeforeLose();
				GameManager::Lose();
			}

		default:
			Text::DefaultButton();
			Raid();
			break;
		}

		break;
	case 2:
		WaitRaid();
		break;
	default:
		Text::DefaultButton();
		Raid();
		break;
	}
}

void Level_4::WaitRaid()
{
	int choice = 0;
	Text::Level4::Search();
	cin >> choice;
	switch (choice)
	{
	case 1:
		PreparationForSearch();
		break;
	case 2:
		Text::Level4::Fight();
		GameManager::Lose();
		break;
	default:
		Text::DefaultButton();
		WaitRaid();
		break;
	}

}