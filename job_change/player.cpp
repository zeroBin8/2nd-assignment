#include "player.h"
#include <iostream>
#include <string>

Player::Player(string nickname) : nickname(nickname), level(1) {}


void Player::printPlayerStatus()
{
    cout << "\n------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------\n" << endl;
}

string Player::getJobName() { return job_name; }
string Player::getNickname() { return nickname; }
int Player::getLevel() const { return level; }
int Player::getHP() const { return HP; }
int Player::getMP() const { return MP; }
int Player::getPower() const { return power; }
int Player::getDefence() const { return defence; }
int Player::getAccuracy() const { return accuracy; }
int Player::getSpeed() const { return speed; }

void Player::setNickname(string nickname)
{
    this->nickname = nickname;
}

bool Player::setHP(int HP)
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

void Player::setMP(int MP)
{
    this->MP = MP;
}

void Player::setPower(int power)
{
    this->power = power;
}

void Player::setDefence(int defence)
{
    this->defence = defence;
}

void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
}

void Player::setSpeed(int speed)
{
    this->speed = speed;
}