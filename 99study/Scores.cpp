#include <iostream>
using namespace std;

// 본 파일에서는 GameEntry의 요소와 Scores의 요소를 전부 사용한다.
//? 만약 Scores가 GAmeEntry를 가지고 있다면 굳이 여기서 GAmeEntry를 가져오지 않아도 되지 않나?
#include "GameEntry.h" 
#include "Scores.h"


Scores:: Scores(int maxEnt){  // 받아들일 유저 만큼 array 생성
    maxEntries = maxEnt;
    numEntries = 0;
    entries = new GameEntry[maxEntries]; //동적 배열 할당
}

Scores::Scores(const Scores& rs){ // 복사 생성자: 기존의  Scores를 복사해서 생성
    maxEntries = rs.maxEntries; 
    numEntries = rs.numEntries;
    entries = new GameEntry[maxEntries]; //! 중요

    for (int i =0; i< numEntries; i++) //객체 모두 entry 배열에 저장
        entries[i] =rs.entries[i]; 
}

Scores::~Scores(){
    delete[] entries; // 소멸자에서 동적할당 해제 -> 이거 안하면 메모리 누수
}

//!
void Scores::add(const GameEntry& e){ // 유저 추가
    int newScore = e.getScore(); 
    if (numEntries == maxEntries){ //유저가 풀로 찼다면
        if(newScore <= entries[maxEntries-1].getScore()) return;
    }  // 입력한 유저의 점수 <= 배열이 가진 맨 뒤 유저 점수 : 넘어가기
    else
        numEntries++; // 배열의 유저수 +1
    int i = numEntries-2; // 새로운 유저 점수 > 기존 배열 유저 점수 순회 (뒤어서부터)
    while (i >= 0 && newScore > entries[i].getScore()){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e; // 배열에 유저 넣기
}

GameEntry Scores::remove(int i){ //요소 지우기
    if ((i<0)|| (i >= numEntries)){ 
        cout <<"Invaild index";
        return entries[numEntries-1];
    }

    //!
    // 삭제하고 뒤의 요소들 앞으로 땡겨오기
    for(int j = i; j < numEntries-1; j++){
        entries[j] = entries[j+1];
    }
    numEntries--;
    return entries[i];
}



Scores& Scores::operator=(const Scores& rs){
    if (this != &rs){ //자기 자신 대입 방지
        delete[] entries; //기존 메모리 해제
        //!
        maxEntries = rs.maxEntries;
        numEntries = rs.numEntries;
        entries = new GameEntry[maxEntries];//새로운 메모리 할당

        for (int i = 0; i< numEntries; i++){
            entries[i] = rs.entries[i];
        }
    }

    return *this;
}

void Scores::printAll(){
    for(int i =0; i<numEntries; i++){
        cout << i+1<<", "<<entries[i].getName()
        <<", "<<entries[i].getScore()<<endl;
    }
}

ostream& operator<<(ostream& out, const Scores& sc){
    //!
    for(int i =0;i<sc.numEntries;i++){
        out << i+1 <<"."
        <<sc.entries[i].getName()
        <<": "
        <<sc.entries[i].getScore();
        if(i<sc.numEntries -1) out <<endl;
    }
    return out;
}





