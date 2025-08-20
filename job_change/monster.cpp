#include "monster.h"
#include "player.h"
#include <iostream>
#include <string>

monster::monster(string _name) : name(_name), HP(50), power(10), defence(4), speed(10) {}

string monster::getName() const { return name; }
int monster::getHP() const { return HP; }
int monster::getPower() const { return power; }
int monster::getDefence() const { return defence; }
int monster::getSpeed() const { return speed; }

void monster::setName(string _name) { name = _name; }
bool monster::setHP(int HP)
{
	if (HP > 0)
	{
		this->HP = HP;
		return true;
	}
	else
	{
		this->HP = 0;
		return false;
	}
}
void monster::setPower(int power) { this->power = power; }
void monster::setDefence(int defence) { this->defence = defence; }
void monster::setSpeed(int speed) { this->speed = speed; }

//������ = ���� power - �÷��̾� defence < 0 �̸� 1�� ����

void monster::attack(Player* player)
{
	int dmg = getPower() - player->getDefence();

	if (dmg <= 0)
	{
		dmg = 1;
	}

	if (player->setHP(player->getHP() - dmg))
	{
		std::cout << "���Ͱ� " << dmg << "�� ���ط� �����߽��ϴ�." << "\n";
		std::cout << "�÷��̾��� ���� ü��: " << player->getHP() << std::endl;
	}
	else
	{
		std::cout << "�÷��̾��� ���� ü��: " << player->getHP() << "\n";
		std::cout << "���Ͱ� �¸��߽��ϴ�." << endl;
		
	}
}