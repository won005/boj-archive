//! Array 이용 예시
// 동일한 타입의 객체를 여러개 연속한 공간에 저장할 때 사용

//* 비디오 게임을 위해 저장해야할 정보 

#ifndef GAMEENTRY_H
#define GAMEENTRY_H // 중복 include 방지
#include <string>
using namespace std;

class GameEntry{
private:
    string name; // 유저 이름
    int score; // 유저 점수
public: 
    GameEntry(const string& ="", int s =0); // 생성자 : 이름, 점수(디폴트=0)

    //getset : private 값 가져오기 수정하기
    string getName() const; 
    void setScore(int s);
    int getScore() const;

    //추가
    void setName(string s); //이름 수정 추가
};

#endif

//지금 이게 gameentry라는 클래스이자 객체의 틀인거지?