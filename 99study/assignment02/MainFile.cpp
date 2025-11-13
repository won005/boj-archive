#include <iostream>
#include "DEQue.h"
using namespace std;

int main() {
    DEQue dq; // []

    //Stack처럼 사용
    
    dq.insertFront(7);   // [7]
    dq.insertFront(13);  // [13, 7]
    dq.insertFront(9);   // [9, 13, 7]
    cout << dq.front() << " * " << dq.size() << endl; // [9, 13, 7] : 맨앞 9, 크기 3 → 출력: 9 * 3
    
    dq.removeFront();    // [13, 7]
    cout << dq.front() << " * " << dq.size() << endl; // [13, 7] : 맨앞 13, 크기 2 → 출력: 13 * 2
    
    dq.removeFront();    // [7]
    cout << dq.front() << " * " << dq.size() << endl; // [7] : 맨앞 7, 크기 1 → 출력: 7 * 1
    
    dq.removeFront();    // []
    cout << boolalpha << dq.empty() << endl; // [] : 비어있음 true → 출력: true


    //Queue처럼 사용
    
    dq.insertBack(5);    // [5]
    dq.insertBack(3);    // [5, 3]
    cout << dq.front() << " * " << dq.back() << " * " << dq.size() << endl; // [5, 3] : 앞 5, 뒤 3, 크기 2 → 출력: 5 * 3 * 2
    
    dq.removeFront();    // [3]
    dq.insertBack(7);    // [3, 7]
    cout << dq.front() << " * " << dq.back() << " * " << dq.size() << endl; // [3, 7] : 앞 3, 뒤 7, 크기 2 → 출력: 3 * 7 * 2
    
    dq.removeFront();    // [7]
    cout << boolalpha << dq.empty() << endl; // [7] : 비어있지 않음 false → 출력: false

    return EXIT_SUCCESS;
}