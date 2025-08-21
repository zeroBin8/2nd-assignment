#include "warrior.h"
#include <iostream>
#include <string>

using namespace std;

warrior::warrior(string _nickname) : Player(_nickname)
{
    job_name = "����";
    setHP(3);
    setMP(100);
    setPower(10);
    setDefence(6);
    setAccuracy(90);
    setSpeed(70);
}

void warrior::attack()
{
    cout << "���� ����" << endl;
}

void warrior::attack(monster* monster)
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