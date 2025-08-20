#pragma once

#include <iostream>
#include <string>

using namespace std;

class Player; //��ȯ ������ �����ϱ� ���� ���� ������ �����
			  //������ player ����� ���Ͱ� �ְ� ���� ����� �÷��̾� ����� �־���
			  //�÷��̾��� �����͸� �ʿ��ϱ� ������ ���� ������ ���, �÷��̾� ������� ���������� ���� ���� ���� ���

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

