#pragma once

class Enemies 
{
private:
    int EnemyHP; 

public:
    
    Enemies(int initialHP);

    void takeDamage(int weaponType, int spent);
    int getHP() const;
    void setHP(int hp);
    void applyTrapDamage();
};
