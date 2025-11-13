#include "DLinkedList.h"

DLinkedList::DLinkedList() {
    header = new DNode();
    trailer = new DNode();
    header -> next = trailer;
    trailer->prev = header;
    count =0;
}

DLinkedList::~DLinkedList(){
    while(!empty()) removeFront();
    delete header;
    delete trailer;
}

int DLinkedList::size() const{
    return count;
}

bool DLinkedList::empty() const{
    if (header -> next == trailer) return true; //헤더 다음 노드 = 꼬리 -> 꼬리와 헤더가 이어져 있다면
    else return false;

}

int DLinkedList::front() const{
    return header -> next -> data;
}

int DLinkedList::back() const {
    return trailer->prev->data;
}


//한번 add라는 함수로 접근하는데 두번 거치게됨
void DLinkedList::add(DNode* v, int e){ //v노드는 우리가 e데이터를 넣은 노드의 뒤에 위치하게됨
    DNode* u = new DNode; //힙에 저장하도록함(함수가 끝나도 사라지지 않도록)
    u->data = e; //데이터 넣기


    // u <-> v로 들어감
    // u의 연결
    u-> next = v; //u노드의 연결
    u-> prev = v-> prev; //v의 앞이 u의 앞이 되어야한다.

    //u 바깥의 연결
    v->prev-> next = u; //v 앞에 있던 노드의 연결을 u쪽으로 향하게
    v->prev = u; // v 노드의 앞 = u 향하게
    count ++;
}


// header, trailer 는 공백
void DLinkedList:: addFront(int e){
    add(header-> next, e); //맨앞에서 두번째 노드
}

void DLinkedList:: addBack(int e){
    add(trailer,e); 
}

void DLinkedList::remove(DNode* v){
    DNode* u = v-> prev;
    DNode* w = v-> next;
    u-> next = w;
    w-> prev = u;
    delete v;
    count --;
}

void DLinkedList::removeFront(){
    remove(header-> next);
}

void DLinkedList::removeBack(){
    remove(trailer-> prev);
}