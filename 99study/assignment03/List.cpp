#include "List.h"

List::List() {
    header = new DNode();
    trailer = new DNode();

    header->next = trailer;
    trailer->prev = header;
    
    count = 0;
}

List::~List() {
    while(!empty()) eraseFront(); //빌때까지 앞을 지우기
    delete header;
    delete trailer;
}

int List::size() const {
    return count;
}

bool List::empty() const { 
    if(header -> next == trailer) return true;
    else return false;
}


// 앞, 뒤 노드에 추가 -> 링크드 리스트 addFront,addBack과 동일 
void List::insertFront(int e) {
    DNode* newNode = new DNode();
    newNode->data = e;
    
    newNode->next = header->next;
    newNode->prev = header;
    header->next->prev = newNode;
    header->next = newNode;
    
    count++;
}

void List::insertBack(int e) {
    DNode* newNode = new DNode();
    newNode->data = e;
    
    newNode->prev = trailer->prev;
    newNode->next = trailer;
    trailer->prev->next = newNode;
    trailer->prev = newNode;
    
    count++;
}



// 맨 앞 삭제 -> remove와 비슷
void List::eraseFront() {
    if (empty()) return;
    
    DNode* old = header->next;
    header->next = old->next;
    old->next->prev = header;
    
    delete old; // 메모리 해제
    count--;
}

// 맨 뒤 삭제
void List::eraseBack() {
    if (empty()) return;
    
    DNode* old = trailer->prev;

    trailer->prev = old->prev;
    old->prev->next = trailer;
    
    delete old; //메모리 해제
    count--;
}


// 맨앞 맨뒤 노드 반환
DNode* List::begin() const {
    return header->next;
}

DNode* List::end() const {
    return trailer;
}

// 선형 탐색 함수
DNode* linearSearch(const List& list, int key) {
    DNode* current = list.begin();
    
    while (current != list.end()) { //끝까지 순회
        if (current->data == key) { // key 값을 찾아 해당 노드 포인터를 반환
            return current;
        }
        current = current->next;
    }
    
    return nullptr; //없다면 null 반환
}