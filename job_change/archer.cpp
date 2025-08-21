#include "archer.h"
#include <iostream>
#include <string>

using namespace std;

archer::archer(string _nickname) : Player(_nickname)
{
    job_name = "궁수";
    setHP(100);
    setMP(100);
    setPower(10);
    setDefence(5);
    setAccuracy(100);
    setSpeed(90);
}

void archer::attack()
{
    cout << "궁수 공격" << endl;
}

void archer::attack(monster* monster)
{
    int dmg = (getPower() - monster->getDefence())/3;
    if (getHP() > 0)
    {
        if (dmg <= 0)
        {
            dmg = 1;
        }

        for (int i = 0; i < 3; i++)
        {
            if (monster->setHP(monster->getHP() - dmg))
            {
                cout << "몬스터에게 " << dmg << "의 피해를 입혔다." << endl;
            }
            else
            {
                cout << "몬스터에게 " << dmg << "의 피해를 입혔다." << endl;
                cout << "플레이어가 승리했습니다!" << endl;
                break;
            }
        }
    }
    else
    {
        std::cout << "플레이어가 사망하여 공격할 수 없습니다.\n" << std::endl;
    }

    cout << "몬스터의 남은 체력: " << monster->getHP() <<"\n"<< endl;
}