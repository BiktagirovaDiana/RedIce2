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
		cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
		cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
		cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
		cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
		cout << "Ó âàñ íåäîñòàòî÷íî äåíåã" << endl;
		GameManager::Lose();
	}
	int choice;
	Text::Level5::AttackPlane();
	switch (choice)
	{
	case 1:
		PlayerController::setMoney(0);
	case 2:
		PlayerController::setMoney(PlayerController::getMoney() - 1500);

	default:
		AttackPlane();
		cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
		break;
	}
}