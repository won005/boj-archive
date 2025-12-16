#include<iostream>
using namespace std;

#include "Tree.h"

//Tree 생성할 때 
//Tree mytree = new Tree(); -> 컴파일 안됨

/*
new Tree() 는 Tree* 타입을 반환한다. new 가 하는 일은 힙 메모리에 Tree 만큼의 공간을 할당하고 그 공간의 주소를 반환하는 역할임.
Tree myTree; 는 타입이 Tree임  
Tree mytree = new Tree() 라고 하면 컴파일 오류가 안나

//* new는 항상 포인터를 반환함

*/


//O(1) 루트인지 확인
bool Tree::isRoot(Node* node) const{
    bool isroot = false;
    if( root == node){
        isroot = true;
    }
    return isroot; 
}

//On(1) leaf인지 확인
bool Tree::isExternal(Node* node)const{
    //이거는 어떻게 leaf인지 확인하는 걸까
    bool isexternal = false;
    if(node-> left == nullptr && node -> right == nullptr){
        isexternal = true;
    }
    return isexternal;
}


// O(1) 노드의 부모, 오른쪽 위치 내놓기 다이렉트로 내놓을 수 있음
Node* Tree::parent(Node *c) const{
    return c -> parent;
} 

Node* Tree::left(Node *c) const{
    return c -> left;
}
Node* Tree::right(Node *c) const{
    return c -> right;
}


// O(1) Tree의 함수라서 바로 n으로 내놓아도 됨
int Tree::size() const{
    return  n;
}
bool Tree::empty()  const{
    bool isEmpty = false;
    if(n == 0){
        isEmpty = true;
    }
    return isEmpty;
}


// O(1) 노드 수정
Node* Tree::expandExternal(Node *v, int leftData, int rightData){ // int 여야하는거 아닌가??

    // 왼쪽 자식 생성
    Node* leftChild = new Node(leftData,v); //(들어갈 숫자 , 내부모)

    // 오른쪽 자식 생성
    Node* rightChild = new Node(rightData,v);

    //포인터 설정
    v -> left = leftChild;
    v -> right = rightChild;

    n += 2;

    return v;
}


void Tree::insert(int d){
    // 루트가 없을 때
    if (n == 0) {
        Node* newNode = new Node(d, nullptr);
        last  = newNode;
        root = newNode;
    }else{// 루트가 있을 때
        if(last -> parent -> left != nullptr &&last -> left == nullptr){ //마지막 노드의 left 자식이 비어있을때
            // Node* newNode = new Node(d, root); //부모 설정 완
            // root -> left = newNode;
            
            
        }
    }
n++;
    

    // 왼쪽 차있을때

    // 오른쪽 차있을 때
}

//v, v의 부모 삭제 , v 형제를 부모 위치로 올리기
void Tree::removeAboveExternal(Node* v){
    Node* p = v->parent;

    if(p == nullptr) return; // 
}
