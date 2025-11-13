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
    friend class DLinkedList; // private 요소 접근 가능
    //get, set 없이 간결하게 가능
};

//전체 노드 묶음
class DLinkedList{
private:
    DNode* header; // 앞단
    DNode* trailer; // 뒷단
    int count; // 노드 개수


    //private 멤버 함수
    void add(DNode* v, int e); // 뒷단에 e 데이터를 가진 노드 추가하기 
    void remove(DNode* v); // 뒷단 노드 없애기

public:
    DLinkedList(); //생성자
    ~DLinkedList(); //소멸자

    
    int size() const;
    bool empty() const;
    int front() const;
    int back() const;

    void addFront(int e);
    void addBack(int e);
    void removeFront();
    void removeBack();

};

#endif