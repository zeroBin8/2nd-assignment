#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
using namespace std;

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) 
    {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    while (true)
    {
        cout << "선택: ";
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
            cout << "다시 숫자를 입력해 주세요.(1~4)" << endl;
            continue;
        }
    }
    
    

    player->attack();
    player->printPlayerStatus();

    delete player;

    return 0;
}