#include "Shop.h"
#include <iostream>

int Shop::PriceCartridges = 500;
int Shop::PriceGrenade = 1500;
int Shop::PriceRPG = 2000;

void Shop::DisplayShop() 
{
    std::cout << "=== МАГАЗИН ОРУЖИЯ ===" << std::endl;
    std::cout << "1. Патроны (8 шт): $" << PriceCartridges << std::endl;
    std::cout << "2. Граната (4 шт): $" << PriceGrenade << std::endl;
    std::cout << "3. РПГ (3 шт): $" << PriceRPG << std::endl;
}

bool Shop::CanAfford(int price) 
{
    return PlayerController::getMoney() >= price;
}

void Shop::BuyCartridges() 
{
    if (CanAfford(PriceCartridges)) 
    {
        PlayerController::setMoney(PlayerController::getMoney() - PriceCartridges);
        PlayerController::setGun(PlayerController::getGun() + 8);
        std::cout << "Куплено 8 патронов!" << std::endl;
    }
    else 
    {
        std::cout << "Недостаточно денег!" << std::endl;
    }
}

void Shop::BuyGrenade() 
{
    if (CanAfford(PriceGrenade)) 
    {
        PlayerController::setMoney(PlayerController::getMoney() - PriceGrenade);
        PlayerController::setGrenade(PlayerController::getGrenade() + 1);
        std::cout << "Куплена 4 гранаты!" << std::endl;
    }
    else {
        std::cout << "Недостаточно денег!" << std::endl;
    }
}

void Shop::BuyRPG() 
{
    if (CanAfford(PriceRPG)) 
    {
        PlayerController::setMoney(PlayerController::getMoney() - PriceRPG);
        PlayerController::setRPG(PlayerController::getRPG() + 1);
        std::cout << "Куплен 3 РПГ!" << std::endl;
    }
    else 
    {
        std::cout << "Недостаточно денег!" << std::endl;
    }
}