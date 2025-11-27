#include "List.h"
#include <iostream>
using namespace std;

int main() {
    const int NOS = 7;
    int a[NOS] = { 6, 7, 2, 5, 1, 4, 3 };
    List ns; //빈리스트
    
    for (int i = 0; i < NOS; i++) ns.insertBack(a[i]);
    //[6,7,2,5,1,4,3]


    cout << "A sequence of size = " << ns.size() << endl;
    cout << "---- Testing position(pointer)-based operations ----" << endl;
    
    int k;
    DNode* retPos; //검색
    cout << "Enter searching key (-1 for exit) : ";
    cin >> k;
    
    while (k != -1) { //-1하면 종료
        retPos = linearSearch(ns, k); //k 검색하기
        if (retPos == NULL) cout << "Searching key is NOT found!" << endl;
        else cout << "Searching key is found!!" << endl;
        
        cout << "Enter searching key (-1 for exit) : ";
        cin >> k;
    }
    
    for (int i = 0; i < NOS; i++) ns.eraseFront();
    
    return EXIT_SUCCESS;
}