#pragma once
#include "Text.h"
#include "PlayerController.h"
#include "GameManager.h"
//#include "Shop.h"
#include "Enemies.h"

class Shop;

class Level_1
{
private:
    int Killers = 0;
    Shop& shop;  // ссылка должна быть инициализирована
    Enemies enemy;

public:
    Level_1(Shop& shopRef) : shop(shopRef), enemy(40) {}

    void StartLevel();
    // стратегии
    void DestroyEnemy();
    void Negotiations();
    // бой в пустыне
    void PeopleDesert();
    void StrategyDesert();
    void LoseOrWin();
    // бой в логове врага
    void EnemysLair();
    void StrategyLair();
};

