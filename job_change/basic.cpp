#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
using namespace std;

// ���� �Լ�
int main() {
    string jobs[] = { "����", "������", "����", "�ü�" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

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
    
    

    player->attack();
    player->printPlayerStatus();

    delete player;

    return 0;
}