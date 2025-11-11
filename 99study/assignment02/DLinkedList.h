#ifndef DLINKEDLIST_T
#define DLINKEDLIST_T

class DLinkedList; //클래스 선언

// 데이터 노드
class DNode{
private:
    int data; //데이터
    DNode* prev; // 앞 노드
    DNode* next; // 뒤 노드

public:
    friend class DLinkedList;
};

//전체 노드 묶음
class DLinkedList{
private:
    DNode* header; // 앞단
    DNode* trailer; // 뒷단
    int count; // 노드 개수

    void add(DNode* v, int e);
    void remove(DNode* v);
}


#endif