#include "archer.h"
#include <iostream>
#include <string>

using namespace std;

archer::archer(string _nickname) : Player(_nickname)
{
    job_name = "�ü�";
    setHP(100);
    setMP(100);
    setPower(30);
    setDefence(5);
    setAccuracy(100);
    setSpeed(90);
}

void archer::attack()
{
    cout << "�ü� ����" << endl;
}

void archer::attack(monster* monster)
{
    int dmg = (getPower() - monster->getDefence())/3;

    if (dmg <= 0)
    {
        dmg = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        if (monster->setHP(monster->getHP() - dmg))
        {
            cout << "���Ϳ��� " << dmg << "�� ���ظ� ������." << endl;
        }
        else
        {;
            cout << "�÷��̾ �¸��߽��ϴ�!" << endl;
        }
    }

    cout << "������ ���� ü��: " << monster->getHP() << endl;
}