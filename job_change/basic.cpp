#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
#include "monster.h"
using namespace std;

// ���� �Լ�
int main() {
    string jobs[] = { "����", "������", "����", "�ü�" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;
    monster* slime = new monster("������");

    cout << "* �г����� �Է����ּ���: ";
    cin >> nickname;

    cout << "<���� �ý���>" << endl;
    cout << nickname << "��, ȯ���մϴ�!" << endl;
    cout << "* ���Ͻô� ������ �������ּ���." << endl;

    for (int i = 0; i < 4; i++) 
    {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    while (true)
    {
        cout << "����: ";
        cin >> job_choice;

        if (job_choice == 1)
        {
            player = new warrior(nickname);
            break;
        }
        else if (job_choice == 2)
        {
            player = new magician(nickname);
            break;
        }
        else if (job_choice == 3)
        {
            player = new thief(nickname);
            break;
        }
        else if (job_choice == 4)
        {
            player = new archer(nickname);
            break;
        }
        else
        {
            cout << "�ٽ� ���ڸ� �Է��� �ּ���.(1~4)" << endl;
            continue;
        }
    }
    //�����ؾ� �� �κ� - �÷��̾� Ȥ�� ������ HP�� 0�̸� ���� �Ұ� ���� ����ϱ�
    //���� �¸��� ���� ������ ��� �ȵ�, ���� �¸��� ���� �����ϱ�

    //�÷��̾ ����� ���� �Ұ� �׽�Ʈ
    //player->setHP(0); 

    //���� ����� ���� �Ұ� �׽�Ʈ
    //slime->setHP(0);

    //�ٴ���Ʈ �߰��� ���� ����� �ٷ� �¸� ���� ��� �׽�Ʈ
    /*player->setPower(50);*/

    //���� �¸� ��Ȳ �׽�Ʈ
    /*player->setHP(10);
    slime->setPower(40);*/

    player->attack(slime);
    slime->attack(player);

    delete player;
    delete slime;

    return 0;
}