#pragma once
class Enemies
{
private:
    int EnemyHP;

public:
    Enemies(int hp); // Конструктор с начальным HP
    int getHP() const; // Получить текущее HP
    void setHP(int hp); // Установить новое HP
    void takeDamage(int damage); // Нанести урон
};

