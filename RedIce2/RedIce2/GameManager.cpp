#include "GameManager.h"
#include <cstdlib> 
Shop GameManager::shop;  // Сначала Shop
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
	Win();
}
void GameManager::Win()
{
	cout << "Вы успешно прошли наисложнешую игру! :D" << endl;
	exit(0);

}
void GameManager::Lose()
{
	cout << "Вы проиграли" << endl;
	exit(0);
}
