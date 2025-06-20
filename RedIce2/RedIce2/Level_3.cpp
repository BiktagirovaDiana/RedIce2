#include "Level_3.h"

void Level_3::StartLevel()
{
    int choice = 0;
    Text::Level3::HelloPablo3();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Meeting();
        break;
    case 2:
        NoMeeting();
        break;
    default:
        Text::DefaultButton();
        StartLevel();
        break;
    }
}

void Level_3::Meeting()
{
    int choice = 0;
    Text::Level3::Meeting();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Shooting();
        break;
    case 2:
        Spy();
        break;
    default:
        Text::DefaultButton();
        Meeting();
        break;
    }
}

void Level_3::NoMeeting()
{
    int choice = 0;
    Text::Level3::Refusal();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Meeting();
        break;
    case 2:
        Text::Level3::LoseRefusal();
        GameManager::Lose();
        break;
    default:
        Text::DefaultButton();
        NoMeeting();
        break;
    }
}

void Level_3::Spy()
{
    if (PlayerController::getMoney() >= 700)
    {
        PlayerController::setMoney(PlayerController::getMoney() - 700);
        PlayerController::InfoPlayer();
        int choice = 0;
        Text::Level3::Spy();
        cin >> choice;

        switch (choice)
        {
        case 1:
            CleverSpy();
            break;
        case 2:
            Text::Level3::StupedSpy();
            shop.BuyOrNot();
            Shooting();
            break;
        default:
            Text::DefaultButton();
            Spy();
            break;
        }
    }
    else
    {
        Text::BeforeLose();
        GameManager::Lose();
    }
}

void Level_3::CleverSpy()
{
    int choice = 0;
    Text::Level3::CleverSpy();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Shooting();
        break;
    case 2:
        if (PlayerController::getGun() >= 6)
        {
            PlayerController::setGun(PlayerController::getGun() - 6);
            enemy.takeDamage(1, 6);
            PlayerController::InfoPlayer();
            Text::Level3::CleverSpy2();
            Laboratory();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    default:
        Text::DefaultButton();
        GameManager::Lose();
        break;
    }
}

void Level_3::Shooting()
{
    if (PlayerController::getMoney() >= 1200)
    {
        PlayerController::setMoney(PlayerController::getMoney() - 1200);
        PlayerController::InfoPlayer();

        shop.BuyOrNot();

        int choice = 0;
        Text::Level3::Strategy3();
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (PlayerController::getGun() >= 6)
            {
                PlayerController::setGun(PlayerController::getGun() - 6);
                PlayerController::InfoPlayer();
                enemy.takeDamage(1, 6);
                Laboratory();
            }
            else
            {
                Text::DefaultButton();
                GameManager::Lose();
            }
            break;
        case 2:
            if (PlayerController::getGrenade() >= 3)
            {
                PlayerController::setGrenade(PlayerController::getGrenade() - 3);
                enemy.takeDamage(2, 3);
                PlayerController::InfoPlayer();
                Laboratory();
            }
            else
            {
                Text::BeforeLose();
                GameManager::Lose();
            }
            break;
        default:
            Text::DefaultButton();
            Shooting();
            break;
        }
    }
    else
    {
        Text::BeforeLose();
        GameManager::Lose();
    }
}

void Level_3::Laboratory()
{
    int choice = 0;
    Text::Level3::Laboratory();
    cin >> choice;

    switch (choice)
    {
    case 1:
        KidnapScientists();
        break;
    case 2:
        Text::Level3::KillScientists();
        GameManager::Lose();
        break;
    default:
        Text::DefaultButton();
        Laboratory();
        break;
    }
}

void Level_3::KidnapScientists()
{
    int choice = 0;
    Text::Level3::KidnapScientists();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Text::Level3::WinCheap();
        break;
    case 2:
        Text::Level3::WinExpensive();
        break;
    default:
        Text::DefaultButton();
        KidnapScientists();
        break;
    }
}