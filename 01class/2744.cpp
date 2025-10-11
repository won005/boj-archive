#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >>str;

    for(char c : str){
        if(c>90){ //소문자 
            cout << char(c -32);
        }else{
            cout << char(c +32);
        }
    }
}

//? 아스키코드 대소문자 값 차이
// 'a' = 97, 'A' = 65
// 'z' = 122, 'Z' = 90
//  32 씩 차이난다.

//? 패배 요인
//  char(..)로 형변환을 하면 되는데 
//  to string을 썼더니, 아스키코드가 그대로 문자열로 나왔다(ㅋㅋ)

//? 아스키코드 -> string
//  그런건 존재하지 않눈다..
//  char을 통해 간접변환을 이용

//? 형변환 vs 캐스팅
//  형변환이 더 넓은 개념이고 암시 + 명시적인 뜻을 전부 포함한다.
//  캐스틱은 명시적 형변환만을 의미

//? 암시적 형변환 명시적 형변환?
/*
*암시
int a = 10;
double b = a;  // int → double (자동 변환)

char c = 'A';
int num = c;   // char → int (자동, 65)

float f = 3.14;
int i = f;     // float → int (자동, 3) ⚠️ 데이터 손실!



*명시
// 1️⃣ 암시적 형변환 (자동)
int a = 10;
double b = a;  // 형변환 O, 캐스팅 X

// 2️⃣ 명시적 형변환 (수동) = 캐스팅
double c = 3.14;
int d = (int)c;  // 형변환 O, 캐스팅 O

// 3️⃣ 연산 중 자동 형변환
int x = 5;
double y = 2.5;
double result = x + y;  // x가 double로 자동 변환
*/