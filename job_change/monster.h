#pragma once

#include <iostream>
#include <string>

using namespace std;

class Player; //순환 참조를 방지하기 위해 전방 참조를 사용함
			  //원래는 player 헤더에 몬스터가 있고 몬스터 헤더에 플레이어 헤더가 있었음
			  //플레이어의 포인터만 필요하기 때문에 전방 참조로 사용, 플레이어 헤더에도 마찬가지로 몬스터 전방 참조 사용

class monster
{
protected:
	string name;
	int HP;
	int power;
	int defence;
	int speed;

public:
	monster(string _name);

	void attack(Player* player);

	string getName() const;
	int getHP() const;
	int getPower() const;
	int getDefence() const;
	int getSpeed() const;

	void setName(string name);
	bool setHP(int HP);
	void setPower(int power);
	void setDefence(int defence);
	void setSpeed(int speed);
};

