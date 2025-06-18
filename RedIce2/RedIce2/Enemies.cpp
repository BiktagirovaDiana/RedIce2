#include "Enemies.h"

Enemies::Enemies(int hp) : EnemyHP(hp) {}

int Enemies::getHP() const {
    return EnemyHP;
}

void Enemies::setHP(int hp) {
    EnemyHP = hp;
}

void Enemies::takeDamage(int damage) {
    EnemyHP -= damage;
    if (EnemyHP < 0) EnemyHP = 0;
}

