#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Text
{
public:
	static void Continue();
	static void DefaultButton();
	static void BeforeLose();

	struct Level1
	{
		static void HelloPablo1();
		static void Strategy1();
		// ����� � �������
		static void PeopleDesert();
		static void StrategyDesert();
		static void DesertAttak();
		static void DesertDefense();
		static void Death1();
		static void Survive();
		static void Win1();
		// ����� � ������ �����
		static void PeopleLair();
		static void AttakLair();
		static void Win2();
		// ���������� � ����
		static void Nothing();
		// ����������
		static void Negotations();
		static void WinNegotations1();
		static void WinNegotations2();
		static void LoseNegotations();
	};

	struct Level2
	{
		static void HelloPablo2();
		// �����
		static void PayOff();
		// �����
		static void Strategy2();
		// �������
		static void ChooseTrap();
		static void Trap1();
		static void Trap2();
		// ��������
		static void AttackPlace();
		static void PeopleAttack();
		// �����
		static void Restaurant();
		static void Station();
		static void Desert();
		// ��������� ���
		static void StrategyAttack();
		static void AttackFirst();
		static void Defence();
		static void ContinueStrat();
		// ���� �� ���� �������� �������
		static void ifGrenade();
		static void ifGuns();
		static void FinalPart();
		static void WinL2();
		// ���� ���� �������� �������
		static void WinL2Short();
	};

	struct Level3
	{
		static void HelloPablo3();
		// ����� �� �������
		static void Refusal();
		static void LoseRefusal();
		static void Meeting();
		// �����
		static void Spy();
		static void StupedSpy();
		static void CleverSpy();
		static void CleverSpy2();
		// �����
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
		// �����
		static void BuyOff();
		// ������ ������
		static void Peaceful();
		static void Peaceful2();
		static void WinPolice();
		// ��� � ��������
		static void AttackPolice();
		// ��������� �����
		static void Search();
		static void Fight();
		// �������� � �������
		static void Warning();
		static void Trap();
		static void PoliceWin();

	};

	struct Level5
	{
		static void HelloPablo5();
		// ������� � �����
		static void Meeting();
		// ��� � �����
		static void AttackChapo();
		// �������� � �������
		static void Trap();
		// ����� �����
		static void Friend();
		// ���� ���
		static void AttackPlane();
		static void AttackPlane2();
		// ��������� �������
		static void TrapStrategy();
		// ������� � �����
		static void TrapMargo();
		static void DeathMargo();
		static void WinSad();
		// ������� �� ����������� ����������
		static void NeutralPlace();
		static void NeutralPlace2();
		static void War();
		// ������� ������ �� ����
		static void Surveillance();
		static void WinShort();
		// ������� �����
		static void AttackStartegy();
		static void AttackStartegy2();
		static void AttackStartegy3();
		// ���������
		static void ifDefense();
		static void ifAttack();
		// ���
		static void HowContiniue();
		static void ifPatrons();
		static void RPGorGrenade();
		static void NoRPG();
		static void WinFinal();
		static void PoorPreparation();
	};
};
