#pragma once
#include <iostream>
#include <string>
#include "player.h"
#include "monster.h" //������ player.h�� ���� Ŭ������ �־ �װ� �޾Ƽ� �Ϸ� ������ ��ȯ ������ ������ ���� ���� ���� ����� ����

class archer : public Player
{
public:
	archer(string _nickname);

	void attack();
	void attack(monster* monster);
};