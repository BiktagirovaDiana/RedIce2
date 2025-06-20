#include "Enemies.h"
#include <iostream>

Enemies::Enemies(int initialHP) : EnemyHP(initialHP) {}


void Enemies::takeDamage(int weaponType, int spent) {
    int damagePerUnit = 0;

    //  урон за единицу боеприпаса
    switch (weaponType) 
    {
    case 1:  // Пистолет (5 HP за патрон)
        damagePerUnit = 5;
        break;
    case 2:  // Граната (10 HP за штуку)
        damagePerUnit = 10;
        break;
    case 3:  // РПГ (20 HP за выстрел)
        damagePerUnit = 20;
        break;
    default:
        return;
    }

    // общий урон
    int totalDamage = damagePerUnit * spent;
    EnemyHP -= totalDamage;

    if (EnemyHP < 0) 
    {
        EnemyHP = 0;
    }
}

void Enemies::applyTrapDamage() 
{
    EnemyHP -= 20; 
    if (EnemyHP < 0) EnemyHP = 0;
}

int Enemies::getHP() const 
{
    return EnemyHP;
}

void Enemies::setHP(int hp) 
{
    EnemyHP = hp;
    if (EnemyHP < 0)
    {
        EnemyHP = 0;
    }
}


