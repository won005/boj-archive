#ifndef TREE_T
#define TREE_T
#include <list>

class Node
{
private:
    int data;
    Node *parent; // 부모
    Node *left;   // 자식 왼
    Node *right;  // 자식 오

    // 일반 트리
    // 자식들 x list<Node*> children

public: //! 생성자랑 이 노드를 이용할 자료구조 adt를 friend로 추가하는 것
    Node(int d, Node *p = nullptr) : data(d), parent(p), left(nullptr), right(nullptr) {};
    friend class Tree;
    // ~Node 소멸자는 없나?

    ////get set
    //! 다른 자료구조에서 getset은 왜 안썻더라..?
    // int getData() const {return data;}
    // void setData(int d);
};

class Tree
{
private:
    Node *root; // 루트
    int n;      // 노드 개수

public:
    Tree() : root(nullptr), n(0) {}; // Tree 초기화
    ~Tree();

    // O(1) 부모자식 존재 여부
    bool isRoot(Node *p)const; // 부모 포인터
    bool isExternal(Node *p)const; // 자식 포인터 = leaf

    // O(1) 현재 노드의 부모 or 자식 왼쪽 오른쪽 위치 내놓기
    Node *parent(Node *children) const;
    Node *left(Node *parent) const;
    Node *right(Node *parent) const;

    // O(1)
    int size() const; // 노드 개수
    bool empty()const;

    // O(1) 노드 수정 
    Node* expandExternal(Node *v);// 아마 추가하는 거겠지.. 
    void removeAboveExternal(Node *v);// 삭제

    Node *root() const; // 멘 위 루트 get
    //Node *positions(Node *node) const;

    //O(n)
    std::list<Node *> positions() const; // 모든 노드 순회 해서 리스트로 반환하기

};

#endif