#ifndef DLINKEDLIST_T
#define DLINKEDLIST_T

class DLinkedLits; // 클래스 선언하기

// 데이터 노드
class DNode
{
private:
    int data;
    DNode *prev;
    DNode *next;

public:
    friend class DLinkedList; 
};

// 전체 노드 리스트
class DLinkedList
{
private:
    DNode *header;
    DNode *trailer;
    int count;

    void add(DNode *v, int e);
    void remove(DNode *v);

public:
    DLinkedList();
    ~DLinkedList();

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