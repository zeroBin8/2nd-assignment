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
        cout << "������ ���� ü��: " << monster->getHP() << "\n";
        cout << "�÷��̾ �¸��߽��ϴ�!" << endl;
    }

    cout << "������ ���� ü��: " << monster->getHP() << endl;
}