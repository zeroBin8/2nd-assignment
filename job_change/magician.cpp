#include "magician.h"
#include <iostream>
#include <string>

using namespace std;

magician::magician(string _nickname) : Player(_nickname)
{
	job_name = "������";
    setHP(100);
    setMP(120);
    setPower(8);
    setDefence(4);
    setAccuracy(80);
    setSpeed(80);
}

void magician::attack()
{
    cout << "������ ����" << endl;
}

void magician::attack(monster* monster)
{
    int dmg = getPower() - monster->getDefence();
    if (getHP() > 0)
    {
        if (dmg <= 0)
        {
            dmg = 1;
        }


        if (monster->setHP(monster->getHP() - dmg))
        {
            cout << "���Ϳ��� " << dmg << "�� ���ظ� ������." << endl;
        }
        else
        {
            cout << "���Ϳ��� " << dmg << "�� ���ظ� ������." << endl;
            cout << "�÷��̾ �¸��߽��ϴ�!" << endl;
        }
    }
    else
    {
        std::cout << "�÷��̾ ����Ͽ� ������ �� �����ϴ�.\n" << std::endl;
    }

    cout << "������ ���� ü��: " << monster->getHP() <<"\n" << endl;
}