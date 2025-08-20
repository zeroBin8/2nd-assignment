#pragma once
#include <string>

using namespace std;

class monster; //순환 참조를 방지하기 위한 전방 선언

class Player {
public:
    Player(string nickname);

    virtual void attack() = 0;
    virtual void attack(monster* monster) = 0;
    void printPlayerStatus();

    // getter 함수
    string getJobName();
    string getNickname();
    int getLevel() const;
    int getHP() const;
    int getMP() const;
    int getPower() const;
    int getDefence() const;
    int getAccuracy() const;
    int getSpeed() const;

    // setter 함수
    void setNickname(string nickname);
    bool setHP(int HP);
    void setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};