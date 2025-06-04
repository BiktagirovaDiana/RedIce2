#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Text
{
public:

	struct Level1
	{
		static void HelloPablo1();
		static void Strategy1();
		// текст для атаки в пустыни
		static void PeopleDesert();
		static void StrategyDesert();
		static void DesertAttak();
		static void DesertDefense();
		static void Death1();
		static void Survive();
		static void Win1();
		// текст для логова врага
		static void PeopleLair();
		static void AttakLair();
		static void Win2();
		// текст пригласить в свое логово
		static void Nothing();
		// текст переговоры
		static void Negotations();
		static void WinNegotations1();
		static void WinNegotations2();
		static void LoseNegotations();
	};

	struct Level2
	{
		static void HelloPablo2();
		// откуп
		static void PayOff();
		// атака
		static void Strategy2();
		// ловушки
		static void ChooseTrap();
		static void Trap1();
		static void Trap2();
		// разборки
		static void AttackPlace();
		static void PeopleAttack();
		// место
		static void Restaurant();
		static void Station();
		static void Desert();
		// стратегия боя
		static void StrategyAttack();
		static void AttackFirst();
		static void Defence();
		static void ContinueStrat();
		// если не было успешной ловушки
		static void ifGrenade();
		static void ifGuns();
		static void FinalPart();
		static void WinL2();
		// если была успешная ловушка
		static void WinL2Short();
	};

	struct Level3
	{

	};

	struct Level4
	{

	};

	struct Level5
	{

	};
};

