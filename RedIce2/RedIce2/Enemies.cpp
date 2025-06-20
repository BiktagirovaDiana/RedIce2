#include "Enemies.h"
#include <iostream>

Enemies::Enemies(int initialHP) : EnemyHP(initialHP) {}


void Enemies::takeDamage(int weaponType, int spent) {
    int damagePerUnit = 0;

    //  ���� �� ������� ����������
    switch (weaponType) 
    {
    case 1:  // �������� (5 HP �� ������)
        damagePerUnit = 5;
        break;
    case 2:  // ������� (10 HP �� �����)
        damagePerUnit = 10;
        break;
    case 3:  // ��� (20 HP �� �������)
        damagePerUnit = 20;
        break;
    default:
        return;
    }

    // ����� ����
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


