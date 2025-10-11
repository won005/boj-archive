#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,c;
    cin >> a>>b>>c;

    cout<<a+b-c<<'\n'; //연산출력

    string as = to_string(a);
    string bs = to_string(b);
    string result = as+bs; //string끼리 잇기


    //string -> int  , n의자리수
    int num = 0;
    for (char c : result){
        num = num * 10 +(c-'0');
    }

    cout << num - c;

}
//? 자료형 변환!!!!!!!
//! char -> string : for문 (string = char모음 이용)
//! char -> int : 문자열 이용
//! int -> string : to_string

//? string -> int  방법들
//* 수동 구현
/*
int num = 0;
for (char c : result){
    num = num * 10 + (c-'0');
}
Todo: c가 맨 앞의 숫자부터 순회해서 골머리였는데, 10을 중첩해서 곱하고 더하는 걸로 해결함
*/

//* stoi()
/*
#include <stirng>

string str= "12345";
int num = stoi(str);

* 다만 예외처리가 필수이다.
*/

//* stringsteam
/*
#include <sstream>

string str = "12345";
int num;
stringstream ss(str);
ss >> num; -->>??
*/

//? stringsteam에서 =를 쓰지 않고 >>를 쓰는이유?
// ss에서 데이터를 추출해서 num에게 저장 의 의미인데
// =을 쓰면 ss에 num을 대입! 이 되어버려서 문법오류가 난다.


//? 제곱수 표현 방법
//  cmath 라이브러리 pow()함수로 표현이 가능하지만 double을 반환하기에 int 에서는 부정확
//  그러므로 직접 계산 추천