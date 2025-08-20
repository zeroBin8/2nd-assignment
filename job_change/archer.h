#pragma once
#include <iostream>
#include <string>
#include "player.h"
#include "monster.h" //원래는 player.h에 몬스터 클래스를 넣어서 그걸 받아서 하려 했으나 순환 참조의 문제가 생겨 따로 몬스터 헤더를 넣음

class archer : public Player
{
public:
	archer(string _nickname);

	void attack();
	void attack(monster* monster);
};