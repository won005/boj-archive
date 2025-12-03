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
    friend class Sequence;
    friend DNode* linearSearch(const List& list, int key);


    public: //생성자 리스트
    DNode() : data(0),prev(nullptr),next(nullptr){}
};

// List
class List{
    protected:
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

DNode* linearSearch(const List& list, int key);
void bubbleSort(Sequence& ns);  // 추가 : 5번


#endif