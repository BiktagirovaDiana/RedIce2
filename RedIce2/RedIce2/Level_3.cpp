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
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
            shop.BuyOrNor();
            Shooting();
            break;
        default:
            cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
            Spy();
            break;
        }
    }
    else
    {
        cout << "Ó âàñ íåäîñòàòî÷íî äåíåã!" << endl;
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
        if (PlayerController::getGun() >= 2)
        {
            PlayerController::setGun(PlayerController::getGun() - 2);
            PlayerController::InfoPlayer();
            Text::Level3::CleverSpy2();
            cout << "Âû ïîòðàòèëè 2 ïàòðîíà è $700" << endl;
            if (PlayerController::getMoney() >= 700)
            {
                PlayerController::setMoney(PlayerController::getMoney() - 700);
                PlayerController::InfoPlayer();
                Laboratory();
            }
            else
            {
                cout << "Ó âàñ íåäîñòàòî÷íî äåíåã!" << endl;
                GameManager::Lose();
            }
        }
        else
        {
            cout << "Ó âàñ íåäîñòàòî÷íî ïàòðîíîâ!" << endl;
            CleverSpy();
        }
        break;
    default:
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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

        shop.BuyOrNor();

        int choice = 0;
        Text::Level3::Strategy3();
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (PlayerController::getGun() >= 3)
            {
                PlayerController::setGun(PlayerController::getGun() - 3);
                PlayerController::InfoPlayer();
                enemy.takeDamage(40);
                Laboratory();
            }
            else
            {
                cout << "Ó âàñ íåäîñòàòî÷íî ïàòðîíîâ!" << endl;
                GameManager::Lose();
            }
            break;
        case 2:
            if (PlayerController::getGrenade() >= 1)
            {
                PlayerController::setGrenade(PlayerController::getGrenade() - 1);
                PlayerController::InfoPlayer();
                Laboratory();
            }
            else
            {
                cout << "Ó âàñ íåò ãðàíàò!" << endl;
                GameManager::Lose();
            }
            break;
        default:
            cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
            Shooting();
            break;
        }
    }
    else
    {
        cout << "Ó âàñ íåäîñòàòî÷íî äåíåã!" << endl;
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
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
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
        cout << "ÍÅÏÐÀÂÈËÜÍÛÉ ÂÂÎÄ!" << endl;
        KidnapScientists();
        break;
    }
}