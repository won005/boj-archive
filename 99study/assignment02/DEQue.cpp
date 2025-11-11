
#include "DEQue.h"
//DEQue 헤더파일 가져오기


int DEQue::size() const {
    return list.size();// DLinkedList의 size()를 그대로 사용한다.
}

//동일..
bool DEQue::empty() const {
    return list.empty();
}

int DEQue::front() const {
    return list.front();
}

int DEQue::back() const {
    return list.back();
}

// 앞에 데이터 넣기
void DEQue::insertFront(int e) {
    list.addFront(e);
}

// addBack()을 호출
void DEQue::insertBack(int e) {
    list.addBack(e);
}

// removeFront()를 호출
void DEQue::removeFront() {
    list.removeFront();
}

// removeBack()을 호출
void DEQue::removeBack() {
    list.removeBack();
}