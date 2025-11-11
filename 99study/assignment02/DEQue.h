#ifndef DEQUE_H
#define DEQUE_H

#include "DLinkedList.h" //DLL의 상속을 받아 재사용을 하게된다.

class DEQue {
private:
    DLinkedList list;  // Adapter Pattern: DLinkedList를 내부적으로 사용
    
public:
    // 생성자
    DEQue();
    //?왜 소멸자는 필요가 없을 지 생각해보자

    
    // get
    int size() const;
    bool empty() const;
    int front() const;
    int back() const;
    
    // set
    void insertFront(int e);
    void insertBack(int e);
    void removeFront();
    void removeBack();
};

#endif