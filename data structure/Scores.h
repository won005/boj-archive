#ifndef SCORES_H
#define SCORES_H
#include <iostream>
using namespace std;

#include "GameEntry.h" //헤더파일 GameEntry 의 요소를 사용해야할 일 발생

class Scores{
private: 
    int maxEntries; //최대 저장 항목수
    int numEntries;//현재 저장 항목수
    GameEntry* entries; //배열의 시작 주소?

public:
    Scores(int maxEnt = 10); // 리스트 크기설정및 생성
    Scores(const Scores& is); // 
    ~Scores(); //소멸자

    void add(const GameEntry& e); // 유저 추가하기
    GameEntry remove(int i); // 유저 삭제
    Scores& operator=(const Scores& is);
    
    void printAll();
    friend ostream& operator<<(ostream& out, const Scores& sc);
    
};


#endif