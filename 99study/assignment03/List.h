#ifndef LIST_T
#define LIST_T


class List;

// 노드
class DNode {
private:
    int data;
    DNode* prev;
    DNode* next;
    
    friend class List; // List가 DNode의 private 멤버변수에 접근이 필요하다.
    friend DNode* linearSearch(const List& list, int key);  // ← friend 지정

    
public: // 생성자 리스트 사용으로 data = 0 prev,next=null
    DNode() : data(0), prev(nullptr), next(nullptr) {}
};

// List -> DoubleLinkedList 와 유사
class List { 
private:
    DNode* header;
    DNode* trailer;
    int count;

public:
    List();
    ~List();
    
    int size() const;
    bool empty() const;
    
    void insertFront(int e);
    void insertBack(int e);
    void eraseFront();
    void eraseBack();
    
    DNode* begin() const;
    DNode* end() const;
};

// 전역 함수 -> 선형 탐색
DNode* linearSearch(const List& list, int key);

#endif