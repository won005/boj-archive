#include <iostream>
using namespace std;

int main()
{
    char a; //어차피 한 글자 출력하는 거니까 숫자든 문자든 char로
    cin >> a;
    cout<< static_cast<int>(a);
    return 0;
}

/*
? 아스키코드를 출력하는 방법 
    char인 문자를 캐스팅으로 int형으로 바꿔 출력하면 된다.

왜 char를 int 로 바꾸면 아스키 코드가 나올까? char 가 내부적으로 어떻게 저장될까?
    char은 작은 정수형임
    컴퓨터는 변수에 들어간 값들을 숫자로서 아스키코드로 저장함
    char c = 'A' 일 때
    = 저장되는건 문자가 아니라 65
    결국 char 타입은 1바이트 크기의 정수임


캐스팅 종류 : () 괄호 방법도 있는데 왜 static_cast<int>를 사용한건지
    1. 의도가 확실함 : static 말고도 reinterpret(위험한), const(const 제거)등 다양한 종류가 있음
    2. 컴파일 체크 : 포인터는 기본 자료형으로 바꿀 수 없다. 그런 경우에 체크 가능
    3. 검색하기 쉬움 - 맞네;
*/