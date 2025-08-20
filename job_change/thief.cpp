#include "thief.h"
#include <iostream>
#include <string>

using namespace std;

thief::thief(string _nickname) : Player(_nickname)
{
    job_name = "����";
    setHP(100);
    setMP(100);
    setPower(7);
    setDefence(4);
    setAccuracy(90);
    setSpeed(110);
}

void thief::attack()
{
    cout << "���� ����" << endl;
}

void thief::attack(monster* monster)
{
    int dmg = (getPower() - monster->getDefence())/5;

    if (dmg <= 0)
    {
        dmg = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        if (monster->setHP(monster->getHP() - dmg))
        {
            cout << "���Ϳ��� " << dmg << "�� ���ظ� ������." << endl;
        }
        else
        {
            cout << "������ ���� ü��: " << monster->getHP() << "\n";
            cout << "�÷��̾ �¸��߽��ϴ�!" << endl;
        }
    }

    cout << "������ ���� ü��: " << monster->getHP() << endl;
}