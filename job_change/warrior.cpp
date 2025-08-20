#include "warrior.h"
#include <iostream>
#include <string>

using namespace std;

warrior::warrior(string _nickname) : Player(_nickname)
{
    job_name = "전사";
    setHP(3);
    setMP(100);
    setPower(10);
    setDefence(6);
    setAccuracy(90);
    setSpeed(70);
}

void warrior::attack()
{
    cout << "전사 공격" << endl;
}

void warrior::attack(monster* monster)
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