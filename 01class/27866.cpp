#include <iostream>
using namespace std;

int main(){
    int a;
    int count =1; // 번째
    string str;
    cin >> str >> a;

    for (char c : str){
        if(count == a){
            cout << c;
            break;
        }
        count ++;
    }
}

//? 이게 최선의 코드인가?
//  본 코드는 반복문을 통해서 a번째까지 하나하나 세면서 찾아간다.
//  시간 복잡도가 O(a) 
/*
string str;
int a;
cin >> str >> a;

cout << str[a-1]; <<-- string을 배열로서 볼 수 있었어?
*/

//! string은 char의 모음이다.
//  내부적으로는 string hello여도 char data[] = {'h', 'e', 'l', 'l', 'o', '\0'}; 로 저장된다.
//  str[a-1] 이건 배열처럼 보이지만 사실 str.operator[](a-1)로 []연산자를 오버로딩한거다.

//? string으로 또 가능한거?
/*
*배열 접근
str[0]
*반복문
for(char c : str)
* at() 메서드
배열 접근 []에서 범위체크를 하지 않기때문에 런타임 에러가 발생할 수도 있다.
따라서 at()메서드를 이용해 배열로서 접근하는 것이 좋다.
*/