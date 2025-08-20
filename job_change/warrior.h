#pragma once
#include <iostream>
#include <string>
#include "player.h"
#include "monster.h"

class warrior : public Player
{
public:
	warrior(string _nickname);

	void attack();
	void attack(monster* monster);
};