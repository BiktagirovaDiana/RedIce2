#include "Enemies.h"
#include "Shop.h"
Enemies::Enemies(int hp) : EnemyHP(hp) {}

int Enemies::getHP() const
{
    return EnemyHP;
}

void Enemies::setHP(int hp)
{
    EnemyHP = hp;
}

void Enemies::takeDamage(int damage, int weaponType)
{
    int finalDamage = damage;
    switch (weaponType)
    {
    case 1:
        finalDamage = Shop::GetGunDamage();
        break;
    case 2:
        finalDamage = Shop::GetGrenadeDamage();
        break;
    case 3:
        finalDamage = Shop::GetRPGDamage();
        break;
    case 4:
        finalDamage = Shop::GetDamageTrap();
    }
    EnemyHP -= finalDamage;

    if (EnemyHP < 0)
    {
        EnemyHP = 0;
    }
}


