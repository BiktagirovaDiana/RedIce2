#pragma once
class Enemies
{
private:
    int EnemyHP;

public:
    Enemies(int hp); // ����������� � ��������� HP
    int getHP() const; // �������� ������� HP
    void setHP(int hp); // ���������� ����� HP
    void takeDamage(int damage); // ������� ����
};

