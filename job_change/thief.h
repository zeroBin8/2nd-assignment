#pragma once
#include <iostream>
#include <string>
#include "player.h"
#include "monster.h"

class thief : public Player
{
public:
	thief(string _nickname);

	void attack();
	void attack(monster* monster);
};