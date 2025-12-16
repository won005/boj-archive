#ifndef ARRAYTREE_H
#define ARRAYTREE_H

#include <iostream>

// Array-based Complete Binary Tree 
// 완전 이진 트리는 array를 이용하는 것이 필수적이다.
// 인덱스 공식 때문에


class ArrayTree {
private:
    int* arr;           // 배열 (레벨 순서로 저장)
    int capacity;       // 최대 용량
    int n;              // 현재 노드 개수

    // 배열 크기 재조정 (동적 확장)
    void resize();

public:
    // 생성자 & 소멸자
    ArrayTree(int cap = 100);
    ~ArrayTree();

    // 기본 연산
    void insert(int data);      // 레벨 순서로 삽입 (Complete 유지)
    void removeLast();          // 마지막 노드 제거

    // 인덱스 계산 (핵심!)
    int leftChildIndex(int i) const;    // 2*i + 1
    int rightChildIndex(int i) const;   // 2*i + 2
    int parentIndex(int i) const;       // (i-1) / 2

    // 존재 여부 확인
    bool hasLeft(int i) const;
    bool hasRight(int i) const;
    bool isLeaf(int i) const;

    // 데이터 접근
    int getData(int i) const;           // arr[i] 반환
    void setData(int i, int data);      // arr[i] = data

    // 크기 관련
    int size() const;
    bool empty() const;
    bool isFull() const;

    // 순회 (인덱스 기반)
    void preorder(int i = 0) const;     // 전위 순회
    void inorder(int i = 0) const;      // 중위 순회
    void postorder(int i = 0) const;    // 후위 순회
    void levelorder() const;            // 레벨 순회 (그냥 배열 출력!)

    // 출력
    void print() const;                 // 트리 구조 출력
};

#endif
