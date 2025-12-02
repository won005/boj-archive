#ifndef LIST_T
#define LIST_T

class List;

//노드
class DNode{
    private:
    int data;
    DNode* prev;
    DNode* next;

    friend class List; //리스트의 접근을 필요
    friend DNode* linearSearch(const List& list, int key);

    public: //생성자 리스트
    DNode() : data(0),prev(nullptr),next(nullptr){}
};

// List
class List{
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
    
    // 맨앞뒤 노드 리턴하기
    DNode* begin() const;
    DNode* end() const; 
    // 데이터 값이 아닌 node의 포지션을 내놓기 위해서 DNode* 
};

DNode* linearSearchS(const List& list, int key);

#endif