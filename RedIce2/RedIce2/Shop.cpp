#include "Shop.h"
#include <iostream>

int Shop::PriceCartridges = 500;
int Shop::PriceGrenade = 1500;
int Shop::PriceRPG = 2000;

void Shop::DisplayShop() 
{
    std::cout << "=== ������� ������ ===" << std::endl;
    std::cout << "1. ������� (8 ��): $" << PriceCartridges << std::endl;
    std::cout << "2. ������� (4 ��): $" << PriceGrenade << std::endl;
    std::cout << "3. ��� (3 ��): $" << PriceRPG << std::endl;
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
        std::cout << "������� 8 ��������!" << std::endl;
    }
    else 
    {
        std::cout << "������������ �����!" << std::endl;
    }
}

void Shop::BuyGrenade() 
{
    if (CanAfford(PriceGrenade)) 
    {
        PlayerController::setMoney(PlayerController::getMoney() - PriceGrenade);
        PlayerController::setGrenade(PlayerController::getGrenade() + 1);
        std::cout << "������� 4 �������!" << std::endl;
    }
    else {
        std::cout << "������������ �����!" << std::endl;
    }
}

void Shop::BuyRPG() 
{
    if (CanAfford(PriceRPG)) 
    {
        PlayerController::setMoney(PlayerController::getMoney() - PriceRPG);
        PlayerController::setRPG(PlayerController::getRPG() + 1);
        std::cout << "������ 3 ���!" << std::endl;
    }
    else 
    {
        std::cout << "������������ �����!" << std::endl;
    }
}