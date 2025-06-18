#pragma once
#include "Text.h"
#include "PlayerController.h"
#include "GameManager.h"
#include "Shop.h"
#include "Enemies.h"

class Shop;

class Level_1
{
private:
    int Killers = 0;
    Shop Shop;
    Enemies enemy;

public:
    Level_1() : enemy(40) {}

    void StartLevel();
    // ���������
    void DestroyEnemy();
    void Negotiations();
    // ��� � �������
    void PeopleDesert();
    void StrategyDesert();
    void LoseOrWin();
    // ��� � ������ �����
    void EnemysLair();
    void StrategyLair();
};


