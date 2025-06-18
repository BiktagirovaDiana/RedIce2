#pragma once
#include "Text.h"
#include "PlayerController.h"
#include "GameManager.h"
#include "Shop.h"
#include "Enemies.h"

class Shop;

class Level_2
{
private:
    int Killers = 0;
    Shop Shop;
    Enemies enemy;

public:
    Level_2() : enemy(60) {}

    void StartLevel();
    // атака
    void Attack();
    // ловушка
    void Trap();
    // перестрелка
    void PeopleAttack();
    void AttackPlace();
    void StrategyAttack();
    // стратегия атаки
    void ContinueStrat();
    void FinalPart();
};
