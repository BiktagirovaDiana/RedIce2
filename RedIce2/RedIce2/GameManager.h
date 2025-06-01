#pragma once



#include "Level_1.h"
#include "Level_2.h"
#include "Level_3.h"
#include "Level_4.h"
#include "Level_5.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class GameManager
{
private:
	Level_1 Level1;
	Level_2 Level2;
	Level_3 Level3;
	Level_4 Level4;
	Level_5 Level5;

public:
	void StartLevel1();
	void StartLevel2();
	void StartLevel3();
	void StartLevel4();
	void StartLevel5();
	void Win();
	void Lose();
};

