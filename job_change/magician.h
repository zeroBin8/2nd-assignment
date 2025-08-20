#pragma once
#include <iostream>
#include <string>
#include "player.h"
#include "monster.h"

class magician : public Player
{
public:
	magician(string _nickname);

	void attack();
	void attack(monster* monster);
};