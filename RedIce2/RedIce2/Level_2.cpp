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
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
        enemy.takeDamage(20);
        PeopleAttack();
        break;
    default:
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
        Trap();
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
            GameManager::Lose();
        }
        break;
    default:
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
        if (PlayerController::getGun() >= 2)
        {
            PlayerController::setGun(PlayerController::getGun() - 2);
            enemy.takeDamage(20);
            PlayerController::InfoPlayer();
            ContinueStrat();
        }
        else
        {
            GameManager::Lose();
        }
        break;
    case 2:
        PlayerController::setHP(PlayerController::getHP() - 15);
        if (PlayerController::getGun() >= 2)
        {
            PlayerController::setGun(PlayerController::getGun() - 2);
            enemy.takeDamage(10);
            PlayerController::InfoPlayer();
            ContinueStrat();
        }
        else
        {
            GameManager::Lose();
        }
        break;
    default:
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
        if (PlayerController::getGrenade() >= 1)
        {
            PlayerController::setGrenade(PlayerController::getGrenade() - 1);
            enemy.takeDamage(20);
            PlayerController::InfoPlayer();
            Text::Level2::ifGrenade();
            FinalPart();
        }
        else
        {
            GameManager::Lose();
        }
        break;
    case 2:
        if (PlayerController::getGun() >= 3)
        {
            PlayerController::setGun(PlayerController::getGun() - 3);
            enemy.takeDamage(20);
            PlayerController::InfoPlayer();
            Text::Level2::ifGuns();
            FinalPart();
        }
        else
        {
            GameManager::Lose();
        }
        break;
    default:
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
            if (PlayerController::getGun() >= 2)
            {
                PlayerController::setGun(PlayerController::getGun() - 2);
                enemy.takeDamage(20);
                Text::Level2::WinL2();
                PlayerController::setMoney(PlayerController::getMoney() + 2000);
                PlayerController::setInfluence(PlayerController::getInfluence() + 10);
                PlayerController::setHP(PlayerController::getHP() + 20);
                PlayerController::InfoPlayer();
            }
            else
            {
                GameManager::Lose();
            }
            break;
        case 2:
            if (PlayerController::getGrenade() >= 1)
            {
                PlayerController::setGrenade(PlayerController::getGrenade() - 1);
                enemy.takeDamage(20);
                Text::Level2::WinL2();
                PlayerController::setMoney(PlayerController::getMoney() + 2000);
                PlayerController::setHP(PlayerController::getHP() + 20);
                PlayerController::InfoPlayer();
            }
            else
            {
                GameManager::Lose();
            }
            break;
        default:
            cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
            FinalPart();
            break;
        }
    }
}
