#include "List.h"

List::List(){
    header = new DNode();
    trailer = new DNode();

    header -> next = trailer;
    trailer -> prev = header;

    count = 0;
}

List::~List(){
    while(!empty()) eraseFront(); // 데이터 노드만 삭제
    delete header; // 더미 노드 삭제
    delete trailer;
}

/*
size
empty
insert
erase
get
linearSearch
*/
int List::size() const{
    return count;
}

bool List::empty() const{ // count == 0으로도 가능
    if(header -> next == trailer) return true;
    else return false; //? header = trailer가 되는 경우는 없다. 그냥 ==로 비교할 때는 true로 나올 뿐이지 = 즉 같은 건 아님
}

void List::insertFront(int e){
    DNode* newNode = new DNode();
    newNode -> data = e; 

    newNode -> next = header -> next;
    newNode -> prev = header;

    header -> next -> prev = newNode;
    header -> next = newNode;

    count ++;
}

void List::insertBack(int e){
    DNode* newNode = new DNode();
    newNode -> data = e;

    newNode -> next = trailer;
    newNode -> prev = trailer -> prev;

    trailer -> prev -> next = newNode;  // 먼저! (원래 마지막 노드의 next 연결)
    trailer -> prev = newNode;          // 나중에! (trailer의 prev 업데이트)
    count ++;
}


void List::eraseFront(){
    if(empty()) return; 
    DNode* old = header-> next;//첫번째
    header-> next = old -> next; //첫번째에 = 두번째

    old -> next ->prev = header; // 첫번째의 앞 = head로
    delete old;
    count --;
}

void List::eraseBack() {
    if(empty()) return;
    DNode* old = trailer-> prev; // 맨 뒤

    trailer-> prev = old -> prev; //맨뒤 = 맨뒤의 앞.. 맨뒤에서 두번째
    old->prev->next = trailer; //맨뒤의 다음(공백) = trailer

    delete old;
    count --;

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