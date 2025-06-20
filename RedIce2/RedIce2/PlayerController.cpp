#include "PlayerController.h"

int PlayerController::Influence = 60;
int PlayerController::HP = 100;
int PlayerController::Money = 5000;

int PlayerController::Gun = 9;
int PlayerController::Grenade = 0;
int PlayerController::RPG = 0;

void PlayerController::InfoPlayer()
{
    if (HP <= 0) {
        cout << "Ваш картель уничтожен! HP упало до 0." << endl;
        GameManager::Lose();
        return;
    }

    if (Influence < 30) {
        cout << "Ваше влияние упало ниже 30%. Вас больше никто не боится!" << endl;
        GameManager::Lose();
        return;
    }

    cout << "Ваша текущая мощь:" << endl;
    cout << "Влияние: " << Influence << endl;
    cout << "Сила картеля (HP): " << HP << endl;
    cout << "Капитал: " << Money << endl;

    if (Gun > 0 || Grenade > 0 || RPG > 0)
    {
        cout << "Инвентарь: " << endl;
        if (Gun > 0) {
            cout << "Пистолет: " << Gun << " патрон(-а)" << endl;
        }
        if (Grenade > 0) {
            cout << "Граната: " << Grenade << " штук" << endl;
        }
        if (RPG > 0) {
            cout << "РПГ: " << RPG << " заряд" << endl;
        }
    }
    else {
        cout << "Инвентарь пуст" << endl;
    }
}

int PlayerController::getInfluence() { return Influence; }
int PlayerController::getHP() { return HP; }
int PlayerController::getMoney() { return Money; }
int PlayerController::getGun() { return Gun; }
int PlayerController::getGrenade() { return Grenade; }
int PlayerController::getRPG() { return RPG; }

int PlayerController::setInfluence(int x)
{
    Influence = x;
    if (Influence < 30) {
        cout << "Критически низкое влияние: " << Influence << "%" << endl;
        GameManager::Lose();
    }
    return Influence;
}

int PlayerController::setHP(int x)
{
    HP = x;
    if (HP <= 0) {
        HP = 0;
        cout << "HP упало до 0! Картель уничтожен." << endl;
        GameManager::Lose();
    }
    return HP;
}

int PlayerController::setMoney(int x)
{
    Money = x;
    return Money;
}

int PlayerController::setGun(int x)
{
    Gun = x;
    return Gun;
}

int PlayerController::setGrenade(int x)
{
    Grenade = x;
    return Grenade;
}

int PlayerController::setRPG(int x)
{
    RPG = x;
    return RPG;
}