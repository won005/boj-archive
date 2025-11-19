#include "List.h"
#include <iostream>
using namespace std;

int main() {
    // List ADT 테스트 부분
    const int NOS = 7;
    int a[NOS] = { 6, 7, 2, 5, 1, 4, 3 };
    List ns;
    
    for (int i = 0; i < NOS; i++) ns.insertBack(a[i]);
    
    cout << "A sequence of size = " << ns.size() << endl;
    cout << "---- Testing position(pointer)-based operations ----" << endl;
    
    int k;
    DNode* retPos;
    cout << "Enter searching key (-1 for exit) : ";
    cin >> k;
    
    while (k != -1) {
        retPos = linearSearch(ns, k);
        if (retPos == NULL) cout << "Searching key is NOT found!" << endl;
        else cout << "Searching key is found!!" << endl;
        
        cout << "Enter searching key (-1 for exit) : ";
        cin >> k;
    }
    
    for (int i = 0; i < NOS; i++) ns.eraseFront();
    
    return EXIT_SUCCESS;
}