#include "Level_1.h"

void Level_1::StartLevel()
{
    int choice = 0;
    PlayerController::InfoPlayer();
    Text::Level1::HelloPablo1();
    cin >> choice;

    switch (choice)
    {
    case 1:
        DestroyEnemy();
        break;
    case 2:
        Negotiations();
        break;
    default:
        Text::DefaultButton();
        StartLevel();
        break;
    }
}

void Level_1::DestroyEnemy()
{
    int choice = 0;
    Text::Level1::Strategy1();
    cin >> choice;

    switch (choice)
    {
    case 1:
        shop.BuyOrNot();
        PeopleDesert();
        break;
    case 2:
        shop.BuyOrNot();
        EnemysLair();
        break;
    case 3:
        Text::Level1::Nothing();
        DestroyEnemy();
        break;
    default:
        Text::DefaultButton();
        DestroyEnemy();
        break;
    }
}

void Level_1::Negotiations()
{
    int choice = 0;
    Text::Level1::Negotations();
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (PlayerController::getMoney() >= 2000)
        {
            Text::Level1::WinNegotations1();
            PlayerController::setInfluence(PlayerController::getInfluence() - 15);
            PlayerController::setMoney(PlayerController::getMoney() - 2000);
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 2:
        if (PlayerController::getMoney() >= 1000)
        {
            Text::Level1::WinNegotations2();
            PlayerController::setInfluence(PlayerController::getInfluence() - 10);
            PlayerController::setMoney(PlayerController::getMoney() - 1000);
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 3:
        Text::Level1::LoseNegotations();
        GameManager::Lose();
        break;
    default:
        Text::DefaultButton();
        Negotiations();
        break;
    }
    PlayerController::InfoPlayer();
}

void Level_1::PeopleDesert()
{
    int choice = 0;
    Text::Level1::PeopleDesert();
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (PlayerController::getMoney() >= 700)
        {
            Killers = 2;
            PlayerController::setMoney(PlayerController::getMoney() - 700);
            StrategyDesert();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 2:
        if (PlayerController::getMoney() >= 750)
        {
            Killers = 2;
            PlayerController::setMoney(PlayerController::getMoney() - 750);
            StrategyDesert();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 3:
        if (PlayerController::getMoney() >= 1100)
        {
            Killers = 4;
            PlayerController::setMoney(PlayerController::getMoney() - 1100);
            StrategyDesert();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 4:
        if (PlayerController::getMoney() >= 1500)
        {
            Killers = 4;
            PlayerController::setMoney(PlayerController::getMoney() - 1500);
            StrategyDesert();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    default:
        Text::DefaultButton();
        PeopleDesert();
        break;
    }
}

void Level_1::StrategyDesert()
{
    int choice = 0;
    Text::Level1::StrategyDesert();
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (PlayerController::getGun() >= 4)
        {
            Text::Level1::DesertAttak();
            enemy.takeDamage(1, 4);
            PlayerController::setGun(PlayerController::getGun() - 4);
            LoseOrWin();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 2:
        if (PlayerController::getGun() >= 4)
        {
            Text::Level1::DesertDefense();
            enemy.takeDamage(1, 4);
            PlayerController::setGun(PlayerController::getGun() - 4);
            PlayerController::setHP(PlayerController::getHP() - 20);
            LoseOrWin();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    default:
        Text::DefaultButton();
        StrategyDesert();
        break;
    }
    PlayerController::InfoPlayer();
}

void Level_1::LoseOrWin()
{
    if (Killers == 4)
    {
        if (PlayerController::getGun() >= 4)
        {
            Text::Level1::Survive();
            enemy.takeDamage(1, 4);
            PlayerController::setGun(PlayerController::getGun() - 4);
            Text::Level1::Win1();
            PlayerController::setMoney(PlayerController::getMoney() + 1000);
            PlayerController::setInfluence(PlayerController::getInfluence() + 10);
            PlayerController::setHP(PlayerController::getHP() + 20);
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
    }
    else
    {
        Text::Level1::Death1();
        GameManager::Lose();
    }
    PlayerController::InfoPlayer();
}

void Level_1::EnemysLair()
{
    int choice = 0;
    Text::Level1::PeopleLair();
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (PlayerController::getMoney() >= 700)
        {
            Killers = 2;
            PlayerController::setMoney(PlayerController::getMoney() - 700);
            StrategyLair();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 2:
        if (PlayerController::getMoney() >= 900)
        {
            Killers = 3;
            PlayerController::setMoney(PlayerController::getMoney() - 900);
            StrategyLair();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 3:
        if (PlayerController::getMoney() >= 1200)
        {
            Killers = 4;
            PlayerController::setMoney(PlayerController::getMoney() - 1200);
            StrategyLair();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    default:
        Text::DefaultButton();
        EnemysLair();
        break;
    }
}

void Level_1::StrategyLair()
{
    if (PlayerController::getGun() >= 2)
    {
        PlayerController::setGun(PlayerController::getGun() - 2);
        PlayerController::setHP(PlayerController::getHP() - 15);

        int choice = 0;
        Text::Level1::AttakLair();
        enemy.takeDamage(1, 2);
        PlayerController::InfoPlayer();
        cin >> choice;

        switch (choice)
        {
        case 1:
            shop.BuyOrNot();
            PeopleDesert();
            break;
        case 2:
            if (PlayerController::getMoney() >= 3000)
            {
                Text::Level1::Win2();
                PlayerController::setInfluence(PlayerController::getInfluence() - 15);
                PlayerController::setMoney(PlayerController::getMoney() - 3000);
            }
            else
            {
                Text::BeforeLose();
                GameManager::Lose();
            }
            break;
        default:
            Text::DefaultButton();
            StrategyLair();
            break;
        }
    }
    else
    {
        Text::BeforeLose();
        GameManager::Lose();
    }
    PlayerController::InfoPlayer();
}