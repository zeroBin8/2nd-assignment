#include "magician.h"
#include <iostream>
#include <string>

using namespace std;

magician::magician(string _nickname) : Player(_nickname)
{
	job_name = "마법사";
    setHP(100);
    setMP(120);
    setPower(8);
    setDefence(4);
    setAccuracy(80);
    setSpeed(80);
}

void magician::attack()
{
    cout << "마법사 공격" << endl;
}

void magician::attack(monster* monster)
{
    int dmg = getPower() - monster->getDefence();

    if (dmg <= 0)
    {
        dmg = 1;
    }


    if (monster->setHP(monster->getHP() - dmg))
    {
        cout << "몬스터에게 " << dmg << "의 피해를 입혔다." << endl;
    }
    else
    {
        cout << "몬스터의 남은 체력: " << monster->getHP() << "\n";
        cout << "플레이어가 승리했습니다!" << endl;
    }

    cout << "몬스터의 남은 체력: " << monster->getHP() << endl;
}