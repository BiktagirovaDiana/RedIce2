#include "Level_4.h"
#include "GameManager.h"

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
		break;
	case 2:
		WaitRaid();
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

	case 2:

	}

}