#include <string>
using namespace std;

#include "GameEntry.h" // 구현할 헤더파일 가져오기

GameEntry::GameEntry(const string& n, int s): name(n){
    setScore(s);
}


//GameEntry :: <<- 함수의 소속
string GameEntry::getName() const {
    return name;
}

void GameEntry::setScore(int s){
    if(s>=0) score = s; // score은 음수는 취급 x
    else score =0;
}

int GameEntry::getScore() const {
    return score;
}

void GameEntry::setName(string s){
    if(s.size()<=20) name = s;
    else name = "";
}