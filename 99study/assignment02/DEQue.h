#ifndef DEQUE_H
#define DEQUE_H

#include "DLinkedList.h" //DLL의 상속을 받아 재사용을 하게된다.

class DEQue {
private:
    DLinkedList list;  // Adapter Pattern으로서 DLL을 내부적으로 사용하도록 한다.
    
public:
    //생성자 소멸자 x 
    //DLL에서 다 해줌
    

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