#pragma once

#include <iostream>
#include "GameManager.h"

using std::cout;
using std::cin;
using std::endl;

class PlayerController
{
private:
    static int Influence;  // Влияние (должно быть >= 30)
    static int HP;        // Здоровье картеля (должно быть > 0)
    static int Money;

    static int Gun;
    static int Grenade;
    static int RPG;

public:
    static void InfoPlayer();

    static int getInfluence();
    static int getHP();
    static int getMoney();
    static int getGun();
    static int getGrenade();
    static int getRPG();

    static int setInfluence(int x);
    static int setHP(int x);
    static int setMoney(int x);
    static int setGun(int x);
    static int setGrenade(int x);
    static int setRPG(int x);
};
