#ifndef SEQUENCE_H
#define SEQUENCE_H

#include "List.h" // List 상속

class Sequence  : public List{ //List 를 상속받은 Sequence
    public:
    //이미 리스트에 position 기반 연산들이 구현된 상황
    //상속받았기 때문에 굳이 구현할 필요 없다.

    // 인덱스 기반 연산들
    int getAt(int i) const; //인덱스 값 가져오기
    void setAt(int i , int e); //특정 인덱스 값 수정
    void insertAt(int i, int e); // 특정 인덱스에 e 데이터 추가
    void eraseAt(int i); // 특정 인덱스의 값 삭제

    // 인덱스-position 변환 연산
    DNode* atIndex(int i) const; //인덱스로 position 반환
    int indexOf(DNode* p) const; //position으로 인덱스 반환

};


#endif