#include "GameManager.h"
#include <cstdlib> //��� ������ �������
#include <conio.h> //��� _getch();
Shop GameManager::shop;

Level_1 GameManager::Level1(GameManager::shop);
Level_2 GameManager::Level2(GameManager::shop);
Level_3 GameManager::Level3(GameManager::shop);
Level_4 GameManager::Level4(GameManager::shop);
Level_5 GameManager::Level5(GameManager::shop);


void GameManager::StartLevel1()
{
	char choice;
	Level1.StartLevel();
	Text::Continue();
	cin >> choice;
	system("cls");
	StartLevel2();
}

void GameManager::StartLevel2()
{
	char choice;
	Level2.StartLevel();
	cin >> choice;
	system("cls");
	StartLevel3();
}
void GameManager::StartLevel3()
{
	char choice;
	Level3.StartLevel();
	cin >> choice;
	system("cls");
	StartLevel4();
}

void GameManager::StartLevel4()
{
	char choice;
	Level4.StartLevel();
	cin >> choice;
	system("cls");
	StartLevel5();
}

void GameManager::StartLevel5()
{
	char choice;
	Level5.StartLevel();
	cin >> choice;
	Win();
}
void GameManager::Win()
{
	cout << "�� ������� ������ ������������ ����! :D" << endl;
	std::cout << "������� ����� ������� ��� ������..." << std::endl;
	_getch();
}
void GameManager::Lose()
{
	cout << "�� ���������" << endl;
	std::cout << "������� ����� ������� ��� ������..." << std::endl;
	_getch();
}
