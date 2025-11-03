#include <iostream>
#include<string>
using namespace std;

#include "GameEntry.h"
#include "Scores.h"

void main(){
    Scores newList(20); // 20명분 리스트가 들어간 객체 생성

    GameEntry item1("Rob", 750); // 유저1 생성
    newList.add(item1); // 유저 명단에 넣기
    

    GameEntry item3("Anna", 660);
    newList.add(item3);
    
    GameEntry item5("Jack", 510);
    newList.add(item5);
    
    GameEntry item4("Rose", 590);
    newList.add(item4);
    
    GameEntry item2("Paul", 720);
    newList.add(item2);
    
    GameEntry item0("Mike", 1105);
    newList.add(item0);
    //[]


    // 객체 출력
    cout << "After inserting initial items " << endl << newList << endl;
    
    GameEntry newItem("Jill", 740);
    newList.add(newItem);// 추가


    cout << "After adding Jill's Score " << endl << newList << endl;
    
    GameEntry deletedItem = newList.remove(3);
    cout << "After delete 4th(Paul's) score " << endl << newList << endl;
    
}