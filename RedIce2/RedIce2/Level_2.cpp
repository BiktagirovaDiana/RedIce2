#include "Level_2.h"

void Level_2::StartLevel()
{
    int choice = 0;
    PlayerController::InfoPlayer();
    Text::Level2::HelloPablo2();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Attack();
        break;
    case 2:
        Text::Level2::PayOff();
        Attack();
        break;
    default:
        Text::DefaultButton();
        StartLevel();
        break;
    }
}

void Level_2::Attack()
{
    shop.BuyOrNot();
    PlayerController::InfoPlayer();
    int choice = 0;
    Text::Level2::Strategy2();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Trap();
        break;
    case 2:
        PeopleAttack();
        break;
    case 3:
        Text::Level2::PayOff();
        PeopleAttack();
        break;
    default:
        Text::DefaultButton();
        Attack();
        break;
    }
}

void Level_2::Trap()
{
    int choice = 0;
    Text::Level2::ChooseTrap();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Text::Level2::Trap1();
        PlayerController::setInfluence(PlayerController::getInfluence() - 15);
        PlayerController::InfoPlayer();
        PeopleAttack();
        break;
    case 2:
        Text::Level2::Trap2();
        enemy.applyTrapDamage();
        PeopleAttack();
        break;
    default:
        Text::DefaultButton();
        break;
    }
}

void Level_2::PeopleAttack()
{
    int choice = 0;
    Text::Level2::PeopleAttack();
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (PlayerController::getMoney() >= 800)
        {
            Killers = 4;
            PlayerController::setMoney(PlayerController::getMoney() - 800);
            PlayerController::InfoPlayer();
            AttackPlace();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 2:
        if (PlayerController::getMoney() >= 1200)
        {
            Killers = 6;
            PlayerController::setMoney(PlayerController::getMoney() - 1200);
            PlayerController::InfoPlayer();
            AttackPlace();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 3:
        if (PlayerController::getMoney() >= 1600)
        {
            Killers = 8;
            PlayerController::setMoney(PlayerController::getMoney() - 1600);
            PlayerController::InfoPlayer();
            AttackPlace();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    default:
        Text::DefaultButton();
        PeopleAttack();
        break;
    }
}

void Level_2::AttackPlace()
{
    int choice = 0;
    Text::Level2::AttackPlace();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Text::Level2::Restaurant();
        StrategyAttack();
        break;
    case 2:
        Text::Level2::Desert();
        StrategyAttack();
        break;
    case 3:
        Text::Level2::Station();
        PlayerController::setInfluence(PlayerController::getInfluence() - 20);
        PlayerController::InfoPlayer();
        StrategyAttack();
        break;
    default:
        Text::DefaultButton();
        AttackPlace();
        break;
    }
}

void Level_2::StrategyAttack()
{
    int choice = 0;
    Text::Level2::StrategyAttack();
    cin >> choice;

    switch (choice)
    {
    case 1:
        Text::Level2::AttackFirst();
        if (PlayerController::getGun() >= 4)
        {
            PlayerController::setGun(PlayerController::getGun() - 4);
            enemy.takeDamage(1, 4);
            PlayerController::InfoPlayer();
            ContinueStrat();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    case 2:
        PlayerController::setHP(PlayerController::getHP() - 15);

        if (PlayerController::getGun() >= 2)
        {
            PlayerController::setGun(PlayerController::getGun() - 2);
            enemy.takeDamage(1, 2);
            PlayerController::InfoPlayer();
            ContinueStrat();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    default:
        Text::DefaultButton();
        StrategyAttack();
        break;
    }
}

void Level_2::ContinueStrat()
{
    int choice = 0;
    Text::Level2::ContinueStrat();
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (PlayerController::getGrenade() >= 2)
        {
            PlayerController::setGrenade(PlayerController::getGrenade() - 2);
            enemy.takeDamage(2, 2);
            PlayerController::InfoPlayer();
            Text::Level2::ifGrenade();
            FinalPart();
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
            PlayerController::setGun(PlayerController::getGun() - 4);
            enemy.takeDamage(1, 4);
            PlayerController::InfoPlayer();
            Text::Level2::ifGuns();
            FinalPart();
        }
        else
        {
            Text::BeforeLose();
            GameManager::Lose();
        }
        break;
    default:
        Text::DefaultButton();
        ContinueStrat();
        break;
    }
}

void Level_2::FinalPart()
{
    if (enemy.getHP() <= 0)
    {
        Text::Level2::WinL2Short();
        PlayerController::setMoney(PlayerController::getMoney() + 2000);
        PlayerController::setInfluence(PlayerController::getInfluence() + 20);
        PlayerController::setHP(PlayerController::getHP() + 20);
        PlayerController::InfoPlayer();
    }
    else
    {
        int choice = 0;
        Text::Level2::FinalPart();
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (PlayerController::getGun() >= 4)
            {
                PlayerController::setGun(PlayerController::getGun() - 4);
                enemy.takeDamage(1, 4);
                Text::Level2::WinL2();
                PlayerController::setMoney(PlayerController::getMoney() + 2000);
                PlayerController::setInfluence(PlayerController::getInfluence() + 10);
                PlayerController::setHP(PlayerController::getHP() + 20);
                PlayerController::InfoPlayer();
            }
            else
            {
                Text::BeforeLose();
                GameManager::Lose();
            }
            break;
        case 2:
            if (PlayerController::getGrenade() >= 2)
            {
                PlayerController::setGrenade(PlayerController::getGrenade() - 2);
                enemy.takeDamage(2, 2);
                Text::Level2::WinL2();
                PlayerController::setMoney(PlayerController::getMoney() + 2000);
                PlayerController::setHP(PlayerController::getHP() + 20);
                PlayerController::InfoPlayer();
            }
            else
            {
                Text::BeforeLose();
                GameManager::Lose();
            }
            break;
        default:
            Text::DefaultButton();
            FinalPart();
            break;
        }
    }
}
