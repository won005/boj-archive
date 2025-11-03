#include <iostream>
using namespace std;

class SingleLL;

class SNode{ //노드 
    int data; // 저장 데이터
    SNode* next; // 다음 노드
    friend class SingleLL; //? 이거의 존재 이유?
};

class SingleLL{
private:
    SNode* head; //리스트 머리 노드
    SNode* tail; //리스트 꼬리 노드
    int count; //리스트에 있는 노드 개수
public :
    //생성자
    SingleLL(); 
    ~SingleLL();

    bool empty() const; //비었는지 여부
    int size() const; //크기

    int front() const;//맨앞 노드 값 반환
    int back() const; //마지막 노드의 값 반환

    //앞 삽입, 삭제
    void addFront(int e);
    void removeFront();

    //뒤쪽 삽입, 삭제
    void addBack(int e);
    void removeBack();
};

//*------------------------------------------

//생성자 - 기본 상태
SingleLL::SingleLL(){
    head = NULL;
    tail = NULL;
    count = 0;
}


SingleLL::~SingleLL(){
    while(!empty()) removeFront(); //?
}

bool SingleLL::empty() const{
    return (head == NULL); //?
}



int SingleLL::size() const{
    return count;
}


int SingleLL::front() const{
    return head-> data;
}


int SingleLL::back() const{
    return tail->data;
}


//이친구는 head에 새로운 데이터를 넣습니다.
void SingleLL::addFront(int e){ //e = data
    SNode* newNode = new SNode; //데이터를 넣을 새로운 노드 생성
    newNode->data = e;
    newNode->next = head; //기존 헤드를 new노드의 next로 만들기
    if(head == NULL)tail = newNode;//리스트에 요소가 없었다면 tail 이 newNode가 된다.
    head = newNode;
    count ++;
}

void SingleLL::removeFront(){
    SNode* old = head; //front = head 지우기

    if(head == tail){
         head = NULL;
         tail = NULL;
    }
    else{
        head = head -> next;
    }
    delete old;
    count --;

}


void SingleLL::addBack(int e){
    SNode* newNode = new SNode;
    newNode-> data = e;
    newNode-> next = NULL;
    
    
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail-> next = newNode;
        tail = newNode;
    }
    count ++;
}


void SingleLL::removeBack(){
    SNode* p = tail; //기존 tail p에 할당
    SNode* t = head; //기존 헤드 t에 할당

    if(head == tail){
        head = NULL;
        tail = NULL;
    }else{
        while(t->next != tail) t = t->next;
        tail = t;
        tail -> next = NULL;
    }

    delete p;
    count --;
}


