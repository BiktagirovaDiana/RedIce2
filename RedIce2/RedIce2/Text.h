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
		// атака в пустыне
		static void PeopleDesert();
		static void StrategyDesert();
		static void DesertAttak();
		static void DesertDefense();
		static void Death1();
		static void Survive();
		static void Win1();
		// атака в логове врага
		static void PeopleLair();
		static void AttakLair();
		static void Win2();
		// пригласить к себе
		static void Nothing();
		// переговоры
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
		static void HelloPablo3();
		// отакз от встречи
		static void Refusal();
		static void LoseRefusal();
		static void Meeting();
		// шпион
		static void Spy();
		static void StupedSpy();
		static void CleverSpy();
		static void CleverSpy2();
		// атака
		static void Strategy3();
		static void Laboratory();
		static void KillScientists();
		static void KidnapScientists();
		static void WinCheap();
		static void WinExpensive();
	};

	struct Level4
	{
		static void HelloPablo4();
		// откуп
		static void BuyOff();
		// мирный способ
		static void Peaceful();
		static void Peaceful2();
		static void WinPolice();
		// бой с полицией
		static void AttackPolice();
		// дождаться рейда
		static void Search();
		static void Fight();
		// заманить в ловушку
		static void Warning();
		static void Trap();
		static void PoliceWin();

	};

	struct Level5
	{
		static void HelloPablo5();
		// встреча с Чаппо
		static void Meeting();
		// бой с Чаппо
		static void AttackChapo();
		// заманить в ловушку
		static void Trap();
		// найти друга
		static void Friend();
		// план боя
		static void AttackPlane();
		static void AttackPlane2();
		// стратегия ловушка
		static void TrapStrategy();
		// ловушка с Марго
		static void TrapMargo();
		static void DeathMargo();
		static void WinSad();
		// ловушка на нейтральной территории
		static void NeutralPlace();
		static void NeutralPlace2();
		static void War();
		// ловушка слежка за Чапо
		static void Surveillance();
		static void WinShort();
		// лобовая атака
		static void AttackStartegy();
		static void AttackStartegy2();
		static void AttackStartegy3();
		// стратегии
		static void ifDefense();
		static void ifAttack();
		// бой
		static void HowContiniue();
		static void ifPatrons();
		static void RPGorGrenade();
		static void NoRPG();
		static void WinFinal();
	};
};

