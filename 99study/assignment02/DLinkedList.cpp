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
void DLinkedList::add(DNode* v, int e){
    DNode* u = new DNode;
    u->data = e;
    u-> next = v;
    u-> prev = v-> prev;

    v->prev-> next = u;
    v->prev = u;
    count ++;
}

void DLinkedList:: addFront(int e){
    add(header-> next, e); //맨앞에서 두번째 노드
}

void DLinkedList:: addBack(int e){
    add(trailer,e); //왜 trailer->prev가 아닌거지.. 헷갈린다.
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