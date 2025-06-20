#pragma once

class Enemies
{
private:
    int EnemyHP;

public:
    Enemies(int hp);
    int getHP() const;
    void setHP(int hp);
    void takeDamage(int damage, int weaponType);
};


