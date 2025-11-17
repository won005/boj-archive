#include "DLinkedList.h"

DLinkedList::DLinkedList(){
    header = new DNode();
    trailer = new DNode();

    header -> next = trailer;
    trailer -> prev = header; //이중연결

    count =0;
}

DLinkedList::~DLinkedList(){
    while(!empty()) removeFront(); //빌때까지 앞을 지우기
    delete header;
    delete trailer;

}

int DLinkedList::size() const{
    return count;
}

bool DLinkedList::empty() const{
    if(header -> next == trailer) return true;
    else return false;
}

int DLinkedList::front() const{
    return header -> next-> data;
}

int DLinkedList::back() const{
    return trailer -> prev ->data;
}


void DLinkedList::add(DNode* v, int e){
    DNode* u = new DNode;
    u -> data = e;
    u -> next = v; // u -> v
    u -> prev = v -> prev;

    v -> prev -> next = u;
    v -> prev = u;
    count ++;
}

void DLinkedList:: addFront(int e){
    add(header->next, e);
}

void DLinkedList:: addBack(int e){
    add(trailer, e);
}
void DLinkedList:: remove(DNode* v){
    DNode* u = v-> prev;
    DNode* w = v -> next;

    u -> next = w;
    w->prev = u;
    delete v;
    count --;
    
}


void DLinkedList::removeFront(){
    remove(header-> next);
}

void DLinkedList::removeBack(){
    remove(trailer-> prev);
}

