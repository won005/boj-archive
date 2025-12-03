#include <iostream>
#include "Sequence.h"
using namespace std;

int main() {
    const int NOS = 7;
    int a[NOS] = {6, 7, 2, 5, 1, 4, 3};
    Sequence ns;

    // 시퀀스에 데이터 삽입
    for (int i = 0; i < NOS; i++) {
        ns.insertAt(i, a[i]);
    }
    
    cout << "A sequence of size = " << ns.size() << endl;
    
    // 버블 정렬
    bubbleSort(ns);
    
    cout << "---- Testing index-based operations ----" << endl;
    // 인덱스 기반 연산으로 출력
    for (int i = 0; i < NOS; i++) {
        cout << "Index = " << i << " => " << ns.getAt(i) << endl;
    }
    
    cout << "---- Testing position(pointer)-based operations ----" << endl;
    int k;
    DNode* retPos;
    
    cout << "Enter searching key (-1 for exit) : ";
    cin >> k;
    
    while (k != -1) {
        retPos = linearSearch(ns, k);
        
        if (retPos == nullptr) {
            cout << "Searching key is NOT found!" << endl;
        } else {
            cout << "Searching key is found at index = " << ns.indexOf(retPos) << endl;
        }
        
        cout << "Enter searching key (-1 for exit) : ";
        cin >> k;
    }
    
    // 모든 원소 삭제
    for (int i = 0; i < NOS; i++) {
        ns.eraseAt(0);
    }
    
    return 0;
}