#include "GameManager.h"

Level_1 GameManager::Level1;
Level_2 GameManager::Level2;
Level_3 GameManager::Level3;
Level_4 GameManager::Level4;
Level_5 GameManager::Level5;


void GameManager::StartLevel1()
{
	Level1.StartLevel();
	StartLevel2();
}

void GameManager::StartLevel2()
{
	Level2.StartLevel();
	StartLevel3();
}
void GameManager::StartLevel3()
{
	Level3.StartLevel();
	StartLevel4();
}

void GameManager::StartLevel4()
{
	Level4.StartLevel();
	StartLevel5();
}

void GameManager::StartLevel5()
{
	Level5.StartLevel();
	Win();
}
void GameManager::Win() 
{
	cout << "�� ������� ������ ������������ ����! :D" << endl;
	exit(0);

}
void GameManager::Lose() 
{
	cout << "�� ���������" << endl;
	exit(0);
}
